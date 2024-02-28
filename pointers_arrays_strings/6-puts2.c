#include "main.h"
/**
 *puts2 - Program prints a every other character of a string
 *
 *@str: a pointer to char s
 *
 *Return: void
 */
void puts2(char *str)
{
int x = 0;
int len = 0;

	while (str[len] != '\0')
	{
	len++;
	}
		while (x < len)
			{
			_putchar(str[x]);
			x += 2;
			}
_putchar('\n');
}
