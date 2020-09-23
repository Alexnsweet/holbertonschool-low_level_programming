#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints from parameter value to 98
 * @n: value of number to count from
 */
void print_to_98(int n)
{

if (n < 98)
{
while (n < 98)
{
	printf("%d, ", n);
	n++;
}
	printf("98\n");
}
else if (n > 98)
{
while (n > 98)
{
	printf("%d, ", n);
	n--;
}
	printf("98\n");
}
else if (n == 98)
{
printf("98\n");
}
}
