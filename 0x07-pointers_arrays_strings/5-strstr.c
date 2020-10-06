#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: total string
 * @needle: substring of total
 *
 * Return: substring of total
 */
char *_strstr(char *haystack, char *needle)
{
	int b;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		b = 0;

		if (haystack[b] == needle[b])
		{
			return (haystack);
		}


		b++;
		haystack++;
	}

	return (0);

}
