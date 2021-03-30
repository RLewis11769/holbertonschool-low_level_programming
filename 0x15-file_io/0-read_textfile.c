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

	o_fd = open(filename, O_RDONLY);
	if (o_fd < 0)
		return (0);

	r_fd = read(o_fd, buf, letters);
	if (r_fd < 0)
		return (0);

	w_fd = write(STDOUT_FILENO, buf, r_fd);
	if (w_fd < 0)
		return (0);

	if (w_fd != r_fd)
		return (0);

	free(buf);

	return (w_fd);
}
