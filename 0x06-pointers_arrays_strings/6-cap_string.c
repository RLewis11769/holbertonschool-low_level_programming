#include "holberton.h"

/**
 * *cap_string - capitalizes words in string (after certain characters)
 * @str: pointer to string with characters to be capitalized
 * Return: string with capitalized words
 */

char *cap_string(char *str)
{
	int a;
	int c;
	int arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (a = 0; str[a] != '\0'; a++)
	{
		/* Capitalize first letter of str */
		if ((*str >= 'a') && (*str <= 'z'))
			str[a] = str[a] - 32;

		for (c = 0; c < 13; c++)
		{
			/* If str[a] matches one of 13 characters in arr[] */
			if (str[a] == arr[c])
			{
				/* Capitalize letter after character in arr[] */
				if ((str[a + 1] >= 'a') && (str[a + 1] <= 'z'))
					str[a + 1] = str[a + 1] - 32;
			}
		}
	}

	return (str);
}
