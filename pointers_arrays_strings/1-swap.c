#include "main.h"
#include <stdio.h>
/**
 *swap_int - swaps int a and b
 *
 *@a: a pointer to the integer we want to swap
 *@b: a pointer to the integer we want to swap
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
int temp = *a;
	*a = *b;
		*b = temp;

}
