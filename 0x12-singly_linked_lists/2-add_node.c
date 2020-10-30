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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first element
 * @str: string value
 *
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodeNew = malloc(sizeof(list_t));

	if (str == NULL || nodeNew == NULL)
	{	return (NULL);	}

	nodeNew->str = strdup(str);
	nodeNew->len = _strlen(str);
	nodeNew->next = *head;
	*head = nodeNew;

	return (nodeNew);
}
