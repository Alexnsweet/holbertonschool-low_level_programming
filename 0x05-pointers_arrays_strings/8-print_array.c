#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: integer pointer
 * @n: number of elements in an array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
	printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	i++;
	}

putchar('\n');

