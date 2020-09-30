#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * puts_half - prints second half of string
 * @str: string input
 */
void puts_half(char *str)
{
	long len = 0;
	long n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (n = len / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (len -  1) / 2; n < len; ++n)
		{
			_putchar(str[n]);
		}
	}

_putchar('\n');

return;

}
