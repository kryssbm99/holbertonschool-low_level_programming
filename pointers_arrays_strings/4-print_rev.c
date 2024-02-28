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
int x = 0;
int y = 0;
	while (s[x])
	{
		x++;
	}
		for (y = x - 1; y >= 0; y--)
		{
			_putchar(s[y]);
		}
		_putchar('\n');
}
