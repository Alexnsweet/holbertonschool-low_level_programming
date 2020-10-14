#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates a array of chars and initializes with a specific char
 * @size: size of array
 * @c: char to initialize with
 *
 * Return: pointer to the array or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *b;

	if (size > 0)
	{
		b = malloc(sizeof(c) * size);
	}

	if (b == NULL)
	{
		return (NULL);
	}
	else
	{

		while (size != 0)
		{
			size--;
			b[size] = c;
		}

		return (b);
	}

}
