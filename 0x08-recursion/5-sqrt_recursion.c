#include "holberton.h"
/**
 * square - returns square of a number
 * @i: square test
 * @n: input number
 *
 * Return: square number
 */

int square(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (square(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number to return natural square from or -1 if no natural
 *
 * Return: natural square root or -1 if none
 */



int _sqrt_recursion(int n)
{

	return (square(0, n));

}
