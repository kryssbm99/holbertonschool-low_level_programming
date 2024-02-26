#include "main.h"
/**
 *print_diagonal - Program prints \  based on the value of n
 *@n: variable for print_diagonal
 *Return: Always returns 0
 */
void print_diagonal(int n)
{
int x;
int y;
	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 0; y < x; y++)
			{
				if (y != 0)
				{
				_putchar(' ');
				}
			}
		_putchar('\\');
		_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}

}



