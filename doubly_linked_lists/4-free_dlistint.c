#include "lists.h"

/**
 *free_dlistint - Function frees a dlistint_t list
 *@head: Pointer to the first node of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
