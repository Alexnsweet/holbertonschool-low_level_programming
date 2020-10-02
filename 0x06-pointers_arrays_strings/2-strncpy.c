#include "holberton.h"
/**
 * _strncpy - Copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0, src_len = 0, i;

	while (src[src_len] != '\0')
	{	src_len++;	}

	while (dest[dest_len] != '\0')
	{	dest_len++;	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{	dest[i] = src[i];	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

