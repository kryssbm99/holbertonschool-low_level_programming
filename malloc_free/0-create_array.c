#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Function that creates an array of chars
 *
 *@size: size of memory
 *@c: variable c for char
 *
 *Return: NULL if size = 0 else returns pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	return (array);
}

