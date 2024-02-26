#include "main.h"
/**
 *more_numbers - more_numbers function
 *
 *Description: Using a for loop and to print the numbers from 0 to 14
 *10 times
 *Return: Will be void
 */
void more_numbers(void)
{
int num;
int x;
	for (num = 0; num < 10; num++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('0' + (x / 10));
			}
			_putchar('0' + (x % 10));
		}
	_putchar('\n');
	}
}
	
