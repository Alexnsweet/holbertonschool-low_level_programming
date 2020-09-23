#include "holberton.h"
/**
 * _islower - checks to see if c is lowercase
 * @c: ascii integer value
 *
 * Return: 1 if lowercase, 0 if other
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
