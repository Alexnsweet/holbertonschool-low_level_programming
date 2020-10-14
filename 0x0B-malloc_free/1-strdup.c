#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns pointer to new alloc'd space in mem containing string
 * @str: sting
 *
 * Return: NULL if string is NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[len] != '\0')
		{
			len++;
		}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len + 1; i++)
	{
		ptr[i] = str[i];
	}
	}
return (ptr);
}
