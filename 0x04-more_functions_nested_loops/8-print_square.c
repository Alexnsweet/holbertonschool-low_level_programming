#include "holberton.h"
/**
 * print_square - prints square based on size
 * @size: size of square
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
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
