#include "main.h"
/**
 *print_line - Program prints _ based on the value of n
 *@n: variable for print_line
 *Return: Always returns 0
 */
void print_line(int n)
{
int x;
int y;
	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 0; y < x; y++)
			{
				if (x != 0)
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



