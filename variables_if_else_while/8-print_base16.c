#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main function
 *
 *Description:The program uses a for loop and putchar to print numbers 0 to 9
 *And letters from A
 *
 *Return: Always returns 0
 */
int main(void)
{
	int ns;
	int jk;

	for (ns = '0'; ns <= '9'; ns++)
	{
		putchar(ns);
	}
	for (jk = 'a'; jk <= 'f'; jk++)
	{
		putchar(jk);
	}
		putchar('\n');

	return (0);
}
