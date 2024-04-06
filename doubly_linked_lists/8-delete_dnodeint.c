#include "lists.h"

/**
 *delete_dnodeint_at_index - Deletes the node at index index of a linked list
 *@head: Pointer to a pointer of the first node
 *@index: Index of the node that should be deleted
 *Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index != 0)
	{
		current = current->next;
		if (current == NULL)
		{
			return (-1);
		}
		index--;

		while (current == *head)
		{
			*head  = current->next;
			if (*head != NULL)
			{
				(*head)->prev = NULL;
			}
		}
		else
		{
			current->prev->next = current->next;
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
		}

		free(current);
		return (1);
}
