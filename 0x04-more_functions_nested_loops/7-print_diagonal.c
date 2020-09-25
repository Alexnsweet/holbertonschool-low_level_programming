#include "holberton.h"
/**
 * print_diagonal - print diagonal line n length
 * @n: length of diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

if (n > 0)
{
	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
else
{
	_putchar('\n');
}


}
