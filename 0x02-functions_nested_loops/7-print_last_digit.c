#include "holberton.h"
/**
 * print_last_digit - returns the value of the last digit
 * @ld: number
 *
 * Return: some value
 */
int print_last_digit(int ld)
{
	if (ld >= 0)
	{
		ld = ld % 10;
		_putchar(ld + 48);
	}
	else if (ld <= 0)
	{
		ld = (ld % 10) * -1;
		_putchar(ld + 48);
	}
	else
	{
		ld = 48;
		_putchar(48);
	}
	return (ld);
}
