#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i, j;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (j = 0, i = 0; src[j] != '\0'; i++, j++)
	{
		dest[dest_len + i] = src[j];
	}
	dest[dest_len + i] = '\0';

	return (dest);

}
