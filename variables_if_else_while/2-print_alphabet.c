#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main function
 *
 *Description:The program uses a for loop and putchar to print the alphabet
 *
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
		putchar('\n');

	return (0);
}
