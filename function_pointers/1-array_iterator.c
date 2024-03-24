#include "function_pointers.h"
/**
 *array_iterator - Function that executes a function given as a parameter.
 *@array: Int pointer for array
 *@size: size of the array
 *@action: Function of action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = size;

	while (size > 0)
	{
		action(array[x - size]);
		size--;
	}
}
