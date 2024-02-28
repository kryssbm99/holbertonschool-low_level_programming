#include "main.h"
/**
 *print_rev - print a string in reverse
 *
 *@s: a pointer to char s
 *
 *Return: void
 */
void print_rev(char *s)
{
int x;
int len;
int temp;

	len = _strlen(s);

		for (x = 0; x < len / 2; x++)
		{
			temp = s[x];
			s[x] = s[len - x - 1];
			s[len - x - 1] = temp;
		}
}
