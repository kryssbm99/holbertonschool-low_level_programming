#include "main.h"
/**
 *print_alphabet_x10 - print_alphabet_x10 function
 *
 *Description: Using a while loop and the prototypes to print the alphabet
 *
 *Return: Will be void
 */
void print_alphabet_x10(void)
{
char abc = 'a';
int outer = 0;
	while (outer < 10)
{
		while (abc <= 'z')
{
		_putchar(abc);

		abc++;
}
		_putchar('\n');
		outer++;
}
}
