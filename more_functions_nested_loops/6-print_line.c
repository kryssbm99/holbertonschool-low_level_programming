#include "main.h"
/**
 *print_line - Program prints _ based on the valueof n
 *
 *Return: Always returns 0
 */
void print_line(void)
{
int x;
	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
}
}
