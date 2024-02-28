#include "main.h"
/**
 *rev_string - reverses a string
 *
 *@s: a pointer to char s
 *
 *Return: void
 */
void rev_string(char *s)
{
int len = 0;
int x = 0;
char temp;

	while (s[x])
	{
		x++;
	}
		for (len = 0; len < x / 2; len++)
		{
			temp = s[len];
			s[len] = s[x - 1 - len];
			s[x - 1 - len] = temp;
		}
}
