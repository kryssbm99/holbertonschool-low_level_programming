#include "main.h"
/**
 *array_range - Function that creates an array of intergers
 *
 *@min: variable for min
 *@max: variable for max
 *
 *Return: var
 */
int *array_range(int min, int max)
{
	int *var;
	int i = 0;
	int len;

	if (min < max)
	{
		return (NULL)
	}

	len = (max - min) +1;

	var = (int *) malloc(sizeof(int) * var);

	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		var[i] = min + 1;
	}
	return (var);
}
