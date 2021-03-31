#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * mallocBuffer - creates buffer to read from src and write to dest
 * @src_file: name of src file/filefrom/argv[1] where reading from
 * Return: pointer to buffer
 */

char *mallocBuffer(char *src_file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", src_file);
		exit(99);
	}

	return (buf);
}

/**
 * check98 - checks if can read from src
 * @src_fd: file descriptor for src file
 * @r_count: number of bytes read
 * @filefrom: name of src file/filefrom/argv[1]
 * @buf: buffer
 */

void check98(int src_fd, int r_count, char *filefrom, char *buf)
{
	if (src_fd < 0 || r_count < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filefrom);
		free(buf);
		exit(98);
	}
}

/**
 * check99 - checks if can write to dest
 * @dest_fd: file descriptor for dest file
 * @w_count: number of bytes written
 * @r_count: number of bytes read
 * @fileto: name of dest file/fileto/argv[2]
 * @buf: buffer
 */

void check99(int dest_fd, int w_count, int r_count, char *fileto, char *buf)
{
	if (dest_fd < 0 || w_count < 0 || w_count != r_count)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		free(buf);
		exit(99);
	}
}

/**
 * closeSyscall - closes file indicated by fd
 * @fd: file descriptor for file to be closed (either src or dest)
 */

void closeSyscall(int fd)
{
	int c_fd;

	c_fd = close(fd);

	if (c_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents of one file to another
 * @argc: number of arguments
 * @argv: array of pointers to argument strings
 * Return: 0 if successful
 */

/*
 * Error messages:
 * 97 - incorrect number of arguments, needs 3 - name, filefrom, fileto
 * 98 - can't read from argv[1] (read fail, src open fail)
 * 99 - can't write to argv[2] (write fail, dest open fail, buffer fail)
 * 100 - can't close file (src close fail, dest close fail)
 */

int main(int argc, char *argv[])
{
	int src_fd, dest_fd;
	int r_count, w_count;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = mallocBuffer(argv[1]);

	/* opens src file and reads to buf */
	src_fd = open(argv[1], O_RDONLY);
	r_count = read(src_fd, buf, 1024);

	/* error check if unable to read to buf */
	check98(src_fd, r_count, argv[1], buf);

	/* opens dest file and writes from buf */
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	w_count = write(dest_fd, buf, r_count);

	/* error check if unable to write from buf */
	check99(dest_fd, w_count, r_count, argv[2], buf);

	/* closes both files and frees buffer memory */
	closeSyscall(src_fd);
	closeSyscall(dest_fd);
	free(buf);

	return (0);
}
