#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the nth node of a linked list
 *@head: Pointer to the first node of list
 *@index: Index of the node, starts from 0
 *Return: Pointer t the nth node or NULL if node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		index--;
	}
	return (head);
}
