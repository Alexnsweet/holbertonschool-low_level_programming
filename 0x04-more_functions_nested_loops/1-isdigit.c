#include "holberton.h"
/**
 * _isdigit - tests to see if digit
 * @c: integer value of ascii digit character
 *
 * Return: 1 if digit 0 if other
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
