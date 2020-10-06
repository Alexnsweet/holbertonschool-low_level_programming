#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: placeholder
 * @n: unsigned int
 *
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}


/*
*	while (*s < n)
*	{
*	s = b;
*	s++;
*	}
*/

return (s);

}
