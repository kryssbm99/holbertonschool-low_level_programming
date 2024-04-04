#include "lists.h"

/**
 *add_node_end - Adds a new node at the end of a list
 *@head: Pointer to the head of the list
 *@str: String to be duplicated and stored in new node
 *Return: Address of new or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	int len = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
		current = current->next;
		}

		current->next = new;
	}
		return (new);
}
