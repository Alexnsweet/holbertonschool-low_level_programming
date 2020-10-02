#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, k, l;

	l = n - 1;

	while (i <= l)
	{
		j = a[i];
		k = a[l];
		a[i] = k;
		a[l] = j;

		i++, l--;
	}
}

