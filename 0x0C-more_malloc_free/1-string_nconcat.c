#include <stdlib.h>

/**
 * length - finds length of string
 * @s: string to find length of
 * Return: length of string
 */

unsigned int length(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string, where first n bytes are concatenated
 * @n: max number of bytes copied in s2
 * Return: pointer to allocated memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	int new = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= length(s2))
		n = length(s2);

	p = malloc(sizeof(char) * length(s1) * n + 1);

	if (p == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
	{
		p[new] = s1[x];
		new++;
	}
	for (y = 0; y < n; y++)
	{
		p[new] = s2[y];
		new++;
	}
	p[new] = '\0';
	return (p);
}
