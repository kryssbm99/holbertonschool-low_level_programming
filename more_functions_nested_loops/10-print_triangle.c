#include "main.h"
/**
 *print_triangle - Program prints # to print a triangle 
 *@size: variable for print_triangle
 *Return: Always returns void
 */
void print_triangle(int size)
{
int x;
int y;
int s;
char space = 32;
	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for(s = size - (x + 1); s > 0; s--)
			{	
				_putchar(space);
			}
				for (y = 0; y <= x; y++)
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
