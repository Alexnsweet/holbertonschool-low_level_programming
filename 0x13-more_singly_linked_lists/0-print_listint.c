#include "lists.h"
/**
 * print_listint - prints elements and returns count
 * @h: list
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{	printf("%d\n", h->n);
		h = h->next;
		i++;
	}
return (i);
}
