#include "holberton.h"

/**
 * main - Writes "Holberton" to stdout
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	char *holberton = "Holberton\n";

	for (i = 0; i < 10; i++)
		_putchar(holberton[i]);
	return (0);
}
