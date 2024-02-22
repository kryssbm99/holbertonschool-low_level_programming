#include "main.h"
/**
 *print_last_digit - Program prints the last digit of a number
 *
 *@r: character that is being checked
 *
 *Return: Returns r
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
		r = -r;
	}

	_putchar(r + '0');

	return (r);
}
