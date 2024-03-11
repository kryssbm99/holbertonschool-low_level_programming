#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - Function that returns a pointer to a newly allocated space in mem
 *
 *@str: char pointer for string
 *
 *Return: Returns array pointer else returns NULi
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *strcp;

		if (str == 0)
		{
			return (NULL);
		}
			for (i = 0; str[i]; i++)
			{
				j++;
			}
				strcp = malloc(sizeof(char) * j + 1);
			if (strcp == 0)
			{
				return (NULL);
			}
				for (i = 0; str[i]; i++)
				{
					strcp[i] = str[i];
				}
		return (strcp);
}
