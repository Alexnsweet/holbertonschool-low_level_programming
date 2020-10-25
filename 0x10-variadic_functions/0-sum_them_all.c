#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns sum of all parameters
 * @n: n variable
 *
 * Return: integer sum of parameter values
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a_list;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(a_list, n);

	for (; i < n; i++)
	{
		sum = sum + va_arg(a_list, unsigned int);
		if (n == 0)
		{
			return (0);
		}
	}

	va_end(a_list);
	return (sum);




}
