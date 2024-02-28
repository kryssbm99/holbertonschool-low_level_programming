#include "main.h"
/**
 *puts_half - Program prints half of a string
 *
 *@str: a pointer to char s
 *
 *Return: void
 */
void puts_half(char *str)
{
int x = 0;
int len = 0;

	while (str[len] != '\0')
	{
	len++;
	}
	if ((len % 2) == 0)
	{
		x = len / 2;
	}
	else
	{
		x = (len + 1) / 2;
	}

		while (x < len)
			{
			_putchar(str[x]);
			x++;
			}
_putchar('\n');
}
