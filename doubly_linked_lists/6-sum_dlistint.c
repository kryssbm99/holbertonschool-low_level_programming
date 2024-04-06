#include "lists.h"

/**
 *sum_dlistint - Function returns the sum of all the data (n) of a linked list
 *@head: Pointer to the first node of list
 *
 *
 *Return: Sum of all the data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;

	}

	return (sum);
}
