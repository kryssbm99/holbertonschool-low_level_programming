#include "main.h"
#include <stdio.h>
/**
 *print_chessboard - Function prints the chessboard
 *
 *@a: Pointer of an array of 8
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
int rank;
int file;

	for (rank = 0; rank < 8; rank++)
	{
		for (file = 0; file < 8; file++)
		{
			putchar(a[rank][file]);
		}
		putchar('\n');
	}
}
