#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file to be added to
 * @text_content: string to be added to file
 * Return: 1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o_fd, w_count;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	/* opens filename with read-write permission to append */
	o_fd = open(filename, O_RDWR | O_APPEND);
	if (o_fd < 0)
		return (-1);

	/* writes text_content of length len to file at o_fd */
	w_count = write(o_fd, text_content, len);
	if (w_count < 0)
		return (-1);

	close(o_fd);

	return (1);
}
