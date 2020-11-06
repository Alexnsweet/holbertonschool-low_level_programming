#include "lists.h"
/**
*pop_listint- removes head of linked list
*@head: double pointer to head of linked list
*Return: 0 or value
**/
int pop_listint(listint_t **head)
{
	listint_t *holder = *head;
	int data = holder->n;

        if (*head == NULL)
	{	return (0);	}
	*head = holder->next;
	free(holder);
	return (data);
}
