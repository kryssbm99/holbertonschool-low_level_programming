#include "main.h"
/**
 *times_table - Program prints the 9 times table, starting with 0
 *
 *Return: Void
 */
void times_table(void)
{
int x;
int y;
int a;
int b;
int product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;
			if (product > 9)
			{
				b = result % 10;
				a = (result - b) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(a + '0');
				_putchar(b + '0');
			}
			else
			{
				if (y != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
