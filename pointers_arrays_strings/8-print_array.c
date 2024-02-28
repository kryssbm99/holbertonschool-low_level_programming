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
int x;

	for (x = 0; x < n; x++)
	{
	printf("%d%s", a[x], (x == n - 1) ? "" : ", ");
	}
	_putchar('\n');
}

