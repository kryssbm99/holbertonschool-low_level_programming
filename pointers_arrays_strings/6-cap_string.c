#include "main.h"
/**
 *cap_string - Function that capitalizes all words of a string
 *
 *@a: Char variable to capitalize
 *
 *Return: Capitalized letter will be returned
 */
char *cap_string(char *a)
{
int x;
int y;
int z = 32;
char values[] = {' ', '\t', '\n', ',', ';', '!', '?', '"', '(', ')', '{', '}',
	'\0'};

	for (x = 0; a[x] != '\0'; x++)
	{
		{
			a[x] = a[x] - z;
		}
		z = 0;
		for (y = 0; values[y] != '\0'; y++)
		{
			if (values[y] == a[x])
			{
				z = 32;
			}
		}
	}
	return (a);
}
