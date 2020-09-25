#include "holberton.h"
/**
 * print_most_numbers - prints 0-9
 */
void print_most_numbers(void)
{
	char c = '0';

	while (c >= '0' && c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}

	_putchar('\n');

}
