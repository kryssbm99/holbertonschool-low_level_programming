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
		char sad1 = 'q';
			char sad2 = 'e';

	for (abc = 'a'; abc <= 'z'; abc++)
	if (abc != sad1 && abc != sad2)
	{
		putchar(abc);
	}
		putchar('\n');

	return (0);
}
