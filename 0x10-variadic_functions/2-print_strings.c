#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings then new line
 * @separator: string to print
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;
	char *c;

	va_start(a_list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(a_list, char *);

		if (c != NULL)
		{	printf("%s", c);	}
		else
		{	printf("(nil)");	}

		if (i + 1 < n && separator != NULL)
		{	printf("%s", separator);	}
	}
va_end(a_list);
printf("\n");

}
