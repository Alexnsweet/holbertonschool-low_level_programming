nclude "holberton.h"
#include <stdio.h>
/**
 * get_bit - returns value of a bit at given index
 * @n: value given
 * @index: index of value
 *
 * Return: index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k = n >> index;

	if (index > 63)
	{	return (-1);	}

	k = k & 1;

	if (k == 0 || k == 1)
	{	return (k);	}
	else
	{	return (-1);	}

}
