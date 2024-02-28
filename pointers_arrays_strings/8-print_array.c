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
int boo;

	for (boo = 0; boo < n; boo++)
	{
		if (boo != (n - 1))
		{
			printf("%d, ", a[boo]);
		}
		else
		{
			printf("%d", a[boo]);
		}
	}
	putchar('\n');
}
