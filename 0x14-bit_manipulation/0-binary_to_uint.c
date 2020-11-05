#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of binary values
 *
 * Return: unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;
	int i = 0;

	if (b == NULL)
	{	return (0);	}

	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
		{	return (0);	}
		else
		{
			k = k << 1;
			k = k + b[i] - 48;
			i++;
		}
	}

return (k);

}
