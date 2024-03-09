#include "main.h"
/**
 *_puts_recursion - Function prints a string followed by a new line
 *
 *@s: Pointer for string s
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
