#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int len;
	char *str = "Holberton";

	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}
