#include "holberton.h"
/**
 * _isupper - test whether uppercase or not
 * @c: integer value
 *
 * Return: 1 if lower, 0 if upper
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
