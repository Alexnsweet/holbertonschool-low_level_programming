#include "function_pointers.h"
/**
 * array_iterator - executes function as a given parameter on each elmt of arra
 * @array: array
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != 0 && action != 0)
	{
		while (i < size)
		{
			(action)(array[i]);
			i++;
		}
	}





}
