#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main function
 *
 *Description:The program uses a for loop and putchar to print numbers 0 to 10
 *
 *
 *Return: Always returns 0
 */
int main(void)
{
	int ns;

	for (ns = '0'; ns <= '9'; ns++)
	{
		putchar(ns);
	}
		putchar('\n');

	return (0);
}
