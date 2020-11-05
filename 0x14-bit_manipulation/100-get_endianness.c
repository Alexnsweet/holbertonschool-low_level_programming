#include "holberton.h"
#include <stdio.h>
/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big or 1 if little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
