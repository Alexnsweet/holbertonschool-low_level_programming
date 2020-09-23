#include "holberton.h"
/**
 * print_sign - check the value sign of a number
 * @n: value of number
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{

	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
		else if (n == 0)
		{
			_putchar('0');
			sign = 0;
		}
		else if (n < 0)
		{
			_putchar('-');
			sign = -1;
		}
return (sign);
}
