#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main function
 *
 *Description:The program uses a for and if to print all posible combinations
 *of single digit numbers and have them separated by , and a space
 *
 *Return: Always returns 0
 */
int main(void)
{
	int ns;

	for (ns = 0; ns < 10; ns++)
	{
		putchar(ns + '0');
		if (ns < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
		putchar('\n');

	return (0);
}
