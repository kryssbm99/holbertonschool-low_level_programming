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
char values[] = {' ', '\t', '\n', ',', ';', '!',
	'?', '"', '(', ')', '{', '}', '\0'};

for (x = 0; a[x] != '\0'; x++)
{
	if (a[x] >= 'a' && a[x] <= 'z')
	{
	a[x] -= 32;
	}
		}
return (a);
}
