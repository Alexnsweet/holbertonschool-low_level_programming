#include "holberton.h"
/**
 * _pow_recursion - returns the value of x ^ y
 * @x: integer
 * @y: power to raise integer to
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}

}
