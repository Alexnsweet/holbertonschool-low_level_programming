#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - set value of a bit to 0 at given index
 * @n: integer pointer
 * @index: index from 0 of bit to set
 *
 * Return: 1 if success -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = *n, b = 1;

	if (index > 63)
	{	return (-1);	}

	m = ~m;
	b = b << index;
	b = m | b;
	b = ~b;
	*n = b;
	return (1);





}
