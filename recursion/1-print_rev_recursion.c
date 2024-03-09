#include "main.h"
/**
 *_print_rev_recursion - Function that prints a string in reverse
 *
 *@s: Pointer for char s
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
