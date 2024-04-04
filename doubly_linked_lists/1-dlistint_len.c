#include "lists.h"

/**
 *dlistint_len - Returns the number of in a linked list dlistint_t list
 *@h: Pointer to the head of the list
 *
 *Return: The number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
