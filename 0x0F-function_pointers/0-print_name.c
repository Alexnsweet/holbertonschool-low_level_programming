
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if ((*f) != 0)
	{
	(*f)(name);
	}
else
	{
return;
	}
}
