#include "main.h"
/**
 *print_numbers - print_numbers function
 *
 *Description: Using a for loop and the prototypes to print the numbers
 *
 *Return: Will be void
 */
void print_numbers(void)
{
int num;

for (num = 0; num <= 9; num++)
{
	_putchar(num);

	num++;
}
	_putchar('\n');
}
