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
char abc;
int outer = 0;
int inner = 0;
	while (outer < 10)
{
	inner = 0;
	abc = 'a';
	while (inner < 26)
{
	_putchar(abc);
	abc++;
	inner++;
}
	_putchar('\n');
	outer++;
}

}
