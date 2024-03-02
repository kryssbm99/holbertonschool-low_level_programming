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
char boom[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
int i;
int j;
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (a[i] == boom[j])
			{
				a[i] = number[j];
			}

		}

	}

return (a);
}
