#include "lists.h"
/**
 * list_len - count and return number of elements in linked list
 * @h: string variable
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{	h = h->next;	}

	return (i);
}
