#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - return length of a string
 * @s: character value
 *
 * Return: number of characters in a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
