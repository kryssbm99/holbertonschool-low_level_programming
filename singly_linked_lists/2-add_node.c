#include "lists.h"

/**
 *add_node - Adds a new node at the beggining of a list_t list
 *@head: Pointer to a pointer pointing the head of the list
 *@str: String to be duplicated and stored in the new node
 *Return: Address of new or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
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

	new->next = *head;

	*head = new;

	return (new);
}
