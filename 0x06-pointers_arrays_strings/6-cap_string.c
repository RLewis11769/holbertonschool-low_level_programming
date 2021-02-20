#include "holberton.h"

/**
 * *cap_string - capitalizes words in string
 * @x: pointer to characters to be capitalized
 * Return: characters to be capitalized
 */

char *cap_string(char *str)
{
	int a;
	int c;
	int arr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((*str >= 'a') && (*str <= 'z'))
			str[a] = str[a] - 32;
		for(c = 0; c < 13; c++)
		{
			if (str[a] == arr[c])
			{
				if ((str[a + 1] >= 'a') && (str[a + 1] <= 'z'))
					str[a + 1] = str[a + 1] - 32;
			}
		}
	}
	return (str);
}
