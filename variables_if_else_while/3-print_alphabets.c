#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main function
 *
 *Description:The program uses two for loops and putchar to print the alphabet
 *In lower and uppercase
 *
 *Return: Always returns 0
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}
	for (abc = 'A'; abc <= 'Z'; abc++)
	{
		putchar(abc);
	}
		putchar('\n');

	return (0);
}
