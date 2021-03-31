#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * srcFunction - opens and reads source file
 * @filefrom: argv[1] meaning the source file
 * @buf: buffer
 * Return: return from read syscall to compare later
 */

int srcFunction(char *filefrom, char *buf)
{
	int src_fd;
	int r_fd;

	src_fd = open(filefrom, O_RDONLY);

	r_fd = read(src_fd, buf, 1024);

	if (src_fd < 0 || r_fd < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filefrom);
		free(buf);
		exit(98);
	}

	return (r_fd);
}

/**
 * destFunction - opens and writes to destination file
 * @fileto: argv[2] meaning destination file
 * @r_fd: return from source file's read syscall
 * @buf: buffer
 */

void destFunction(char *fileto, int r_fd, char *buf)
{
	int dest_fd;
	int w_fd;

	dest_fd = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	w_fd = write(dest_fd, buf, r_fd);

	if (dest_fd < 0 || w_fd < 0 || w_fd != r_fd)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fileto);
		free(buf);
		exit(99);
	}
}

/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array of pointers to argument strings
 * Return: actual number of letters printed
 */

int main(int argc, char *argv[])
{
	int r_fd;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	r_fd = srcFunction(argv[1], buf);
	destFunction(argv[2], r_fd, buf);

	free(buf);

	return (0);
}
