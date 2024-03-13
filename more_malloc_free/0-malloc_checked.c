#include "main.h"
/**
 *malloc_checked - Function that allocates memory using malloc
 *
 *@b: unsigned int variable
 *
 *Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (int *) malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
