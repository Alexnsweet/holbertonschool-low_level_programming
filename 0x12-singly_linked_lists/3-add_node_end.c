#include "lists.h"
/**
 * _strlen - returns length of string
 * @c: string variable
 *
 * Return: length of string in integer
 */
int _strlen(const char *c)
{
	int len = 0;

	while (c[len] != '\0')
	{	len++;	}

	return (len);

}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first element
 * @str: string value
 *
 * Return: address of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodeNew = malloc(sizeof(list_t));
	list_t *last = *head;

	if (str == NULL || nodeNew == NULL)
	{	return (NULL);	}

	nodeNew->str = strdup(str);
	nodeNew->len = _strlen(str);
	nodeNew->next = NULL;

	if (*head == NULL)
	{
		*head = nodeNew;
		return (nodeNew);
	}

	while (last->next)
	{	last = last->next;	}


	last->next = nodeNew;

	return (*head);
}
