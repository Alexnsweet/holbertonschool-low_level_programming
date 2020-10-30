#include "lists.h"
/**
 * print_list - prints all elements of list_t list
 * @h: string variable
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h !=  NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			h = h->next;
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
			h = h->next;
		}
		printf("\n");
	}
	return (i);
}
