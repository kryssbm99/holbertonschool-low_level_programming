#include "function_pointers.h"
/**
 *int_index - Function that searches for an integer
 *@array: Array
 *@size: Number of elements in the array
 *@cmp: Pointer to the function to be used to compare
 *
 *Return: Returns -1 or returns x
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
			{
				return (x);
			}
		}
	}
return (-1);
}
