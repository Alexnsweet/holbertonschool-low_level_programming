#include "holberton.h"
/**
 * print_triangle - prints square based on size
 * @size: size of square
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
	for (j = 1; j <= size; j++)
	{
		for (i = 0; i < size - j; i++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= j; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar ('\n');
	}



}
