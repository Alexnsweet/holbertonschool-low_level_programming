#include "holberton.h"
/**
 * flip_bits - get number of bits needed to flip to get to another number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip to equal other number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;
	unsigned int sum = 0;

	while (n || m)
	{
		a = n & 1;
		b = m & 1;

		if (a != b)
		{
			sum++;
		}

		n = n >> 1;
		m = m >> 1;
	}

return (sum);

}
