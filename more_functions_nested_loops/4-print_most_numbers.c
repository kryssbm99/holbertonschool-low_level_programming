#include "main.h"
/**
 *print_most_numbers - Program prints most numbers except 2 and 4
 *
 *Return: Always returns 0
 */
void print_most_numbers(void)
{
	int x;
		int sad1 = '2';
			int sad2 = '4';

	for (x = '0'; x <= '9'; x++)
	if (x != sad1 && x != sad2)
	{
		_putchar(x);
	}
		_putchar('\n');

}
