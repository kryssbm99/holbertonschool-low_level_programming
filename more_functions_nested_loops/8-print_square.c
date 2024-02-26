#include "main.h"
/**
 *print_square - Program prints # to print a square based on the value of n
 *@size: variable for print_square
 *Return: Always returns 0
 */
void print_square(int size)
{
int x;
int y;
	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
		_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}

}
