#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main function
 *
 *Description:The program uses a for loop and putchar to print the alphabet
 *In reverse
 *
 *Return: Always returns 0
 */
int main(void)
{
	char cba;

	for (cba = 'z'; cba >= 'a'; cba--)
	{
		putchar(cba);
	}
		putchar('\n');

	return (0);
}
