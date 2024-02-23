#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_to_98 - Program checks for absolute value
 *
 *@n: Int that is being used for value
 *
 *Return: Returns 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
