#include "main.h"
/**
 *leet - Function that encodes a string into 1337
 *
 *@a: char variable to replace
 *
 *Return: String that will be returned
 */
char *leet(char *a)
{
char boom [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
int number [] = {'4', '4', '3', '3', '0', '7', '7', '1', '1', '\0'};
int x;
int y;

for (x = 0; a[x] != '\0'; x++)
{
	for (y = 0; y < 11; y++)
	{
		if (a[x] == boom[y])
		{
			a[x] = number[y];
		}
	}
}

return (a);
}
