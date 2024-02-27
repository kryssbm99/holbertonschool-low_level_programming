#include "main.h"
#include <stdio.h>
/**
 *reset_to_98 - set the integer to 98
 *
 *
 *@n: a pointer to the integer we want to set to 98
 *
 *Return: void
 */
void reset_to_98(int *n)
{
	printf("Value of 'n': %p\n", n);
	printf("Address of 'n': %p\n", &n);
	*n = 98;

}
