#include "holberton.h"
/**
 * _isalpha - returns 1 if c is a letter, uppercase or lowercase
 * @c: ASCII value
 *
 * Return: 1 if a letter of any case, 0 if otherwise
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
