#include "main.h"
/**
 *print_alphabet_x10 - print_alphabet_x10 function
 *
 *Description: Using a for loop and the prototypes to print the alphabet
 *10 times
 *Return: Will be void
 */
void print_alphabet_x10(void)
{
char abc;
int x;

for (x = 0; x < 10; x++)
{
	for (abc = 'a'; abc <= 'z'; abc ++)
	{
		_putchar(abc);
}
		_putchar('\n');

	}


}
