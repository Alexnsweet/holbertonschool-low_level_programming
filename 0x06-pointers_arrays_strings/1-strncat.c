#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: resulting string
 * @src: source string
 * @n: number of bytes from source string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	while (src[src_len] != '\0')
	{	src_len++;	}

	while (dest[dest_len] != '\0')
	{	dest_len++;	}

	for (i = 0; i < n; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;

		if (src[i] == '\0')
		{
			break;
		}
	}


return (dest);

}
