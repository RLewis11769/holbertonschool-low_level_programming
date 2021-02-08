#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Writes "Holberton" to stdout
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	char *holberton = "Holberton\n";

	for (i = 0; i < 10; i++)
		putchar(holberton[i]);
	return (0);
}
