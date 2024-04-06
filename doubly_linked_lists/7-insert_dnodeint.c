#include "lists.h"

/**
 *insert_dnodeint_at_index - Func that inserts a new node at a given position.
 *@h: Pointer to pointer of the first node in list
 *@idx: Index of the list where node is going to be added
 *@n: Data to be stored in new node
 *Return: Address of new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx != 1)
	{
		temp = temp->next;
		idx--
	}

	if (temp->next == NULL)
	{
		return (add_dnode_end(h, n));
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
