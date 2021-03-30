#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads text file and prints to stdout
 * @filename: name of file to be opened, read, and written
 * @letters: number of letters that should be printed
 * Return: actual number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o_fd, r_fd, w_fd;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/* opens filename as read-only at  first unused FD */
	o_fd = open(filename, O_RDONLY);
	if (o_fd < 0)
		return (0);

	/* reads letters number of chars from o_fd and stores in buf */
	r_fd = read(o_fd, buf, letters);
	if (r_fd < 0)
		return (0);

	/* writes r_fd numbers of chars from buf to stdout */
	w_fd = write(STDOUT_FILENO, buf, r_fd);
	if (w_fd < 0)
		return (0);

	/* verify everything written that was read */
	if (w_fd != r_fd)
		return (0);

	close(o_fd);
	free(buf);

	return (w_fd);
}
