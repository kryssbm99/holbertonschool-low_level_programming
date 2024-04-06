#include "lists.h"

/**
 *add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 *@head: Pointer to pointer of first node of the list
 *@n: Data to be stored in new node
 *Return: Address os the new node or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

return (new);
}
