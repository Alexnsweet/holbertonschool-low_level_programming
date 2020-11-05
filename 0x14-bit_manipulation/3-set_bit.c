#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - set value of a bit to 1 at given index
 * @n: integer pointer
 * @index: index from 0 of bit to set
 *
 * Return: 1 if success -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = *n, b = 1;

	if (index > 63)
	{	return (-1);	}

	b = b << index;
	b = m | b;
	*n = b;
	return (1);





}
