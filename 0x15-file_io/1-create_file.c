#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	int o_fd, w_fd;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (filename[len] != '\0')
		len++;

	/* opens filename as read-write */
	/* if does not exist, create and truncate */
	o_fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o_fd < 0)
		return (-1);

	/* writes text_content of length len to o_fd */
	w_fd = write(o_fd, text_content, len);
	if (w_fd < 0)
		return (-1);

	close(o_fd);

	return (1);
}
