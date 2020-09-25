#include "holberton.h"
/**
 * print_line - printing '_' n times
 * @n: input number
 */
void print_line(int n)
{
	int i;

	for (i = 0; n > 0 && i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');

}
