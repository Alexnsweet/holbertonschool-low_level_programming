#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * @width: width of int
 * @height: height of int
 *
 * Return: pointer to a 2d array of ints
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
	{	return (NULL);	}

	array = malloc(height * sizeof(int));

	if (array == NULL)
	{	return (NULL);	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{	return (NULL);	}
		for (j = 0; j < width; j++)
		{	array[i][j] = 0;	}
	}

	return (array);
}
