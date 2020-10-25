#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: character array
 * @n: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a_list, int));

		if (i + 1 < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}

va_end(a_list);
printf("\n");





}
