#include "lists.h"

/**
 *add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 *@head: Pointer to a pointer of first node in list
 *@n: Data to be stored in new node
 *Return: Address of new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = new;
		new->prev = temp;

		return (new);
}
