#include "main.h"
/**
 *print_sign - Program checks for lowercase
 *
 *@n: character that is being checked
 *
 *Return: This program returns 1,0 or -1 depending on the value of n
 */
int print_sign(int n)
{
	if (n > 0)
		{
		_putchar('+');
		return (1);
		}
		else if (n == 0)
			{
			_putchar('0');
			return (0);
			}
				else if (n < 0)
				{
				_putchar('-');
				return (-1);
				}

				return (0);
}
