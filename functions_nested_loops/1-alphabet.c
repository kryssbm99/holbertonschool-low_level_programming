#include "main.h"
/**
 *print_alphabet - print_alphabet function
 *
 *Description: Using a while loop and the prototypes to print the alphabet
 *
 *Return: Will be void
 */
void print_alphabet(void)
{
char abc = 'a';

while (abc <= 'z')
{
	_putchar(abc);

	abc++;
}
	_putchar('\n');
}
