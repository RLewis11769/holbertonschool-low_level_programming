#include "holberton.h"

/**
 * length - calculates length of string
 * @s: string to find length of
 * Return: length of string
 */

int length(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * check_pal - determines if string is palindrome
 * @s: string to check
 * @first: first index
 * @last: last index
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int first, int last)
{
	/* Base condition when last index is reaches 0 */
	/* If at beginning of string without error, all characters are equal */
	if (last == 0)
		return (1);

	/* If first and last characters are not the same, string is not palindrome */
	if (s[first] != s[last])
		return (0);

	/* Start testing at first and last characters */
	/* Move both indexes inwards until last character is at index 0 */
	return (check_pal(s, first + 1, last - 1));
}

/**
 * is_palindrome - determines if string is palindrome or not
 * @s: pointer to string to analyze
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	/* Index of first and last characters are first characters to test if same */
	return (check_pal(s, 0, length(s) - 1));
}
