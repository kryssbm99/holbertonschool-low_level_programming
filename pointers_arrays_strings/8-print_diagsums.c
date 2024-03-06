#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - Function prints the diagonal sums of a square matrix
 *
 *@a: Pointer for a
 *@size: variable for size of rows and columns
 *
 *Return: Void
 */
void print_diagsums(int *a, int size)
{
	int rows;
	int columns;
	int sum = 0;
	int sum1 = 0;

		for (rows = 0; rows < size; rows++)
		{
		sum += *(a + rows * size + rows);
		}
			for (columns = 0; columns < size; columns++)
			{
			sum1 += *(a + columns * size + (size - 1 - columns));
			}

		printf("%d, %d\n", sum, sum1);
}
