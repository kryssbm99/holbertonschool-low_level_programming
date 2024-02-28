#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_array - Program prints n elements of an array of intergers
 *
 *@a: a pointer to int a
 *@n: integer n
 *
 *Return: void
 */
void print_array(int *a, int n)
{
int x = 0;

	while (x < n - 1)
	{
		if (x != (n - 1))
		{
		printf("%d, ", a[x]);
		x++;
		}
		else
		{
		printf("%d", a[x]);
		x++;
		}
			
	}
	_putchar('\n');
}

