#include "main.h"
/**
 *string_toupper - Function that changes all lowercase of string to upppercase
 *
 *@c: char variable
 *
 *Return: returns the value of *c
 */
char *string_toupper(char *c)
{
int x;
int y = 32;

	for (x = 0; c[x] != '\0' ; x++)
	{
		if (c[x] >= 97 && c[x] <= 122)
		{
			c[x] = c[x] - y;
		}
	}
	return (c);
}
