#include "main.h"
/**
 *more_numbers - more_numbers function
 *
 *Description: Using a for loop and to print the numbers from 0 to 14
 *10 times
 *Return: Will be void
 */
void more_numbers(void)
{
int num;
int x;

for (x = 0; x < 10; x++)
{
	for (num = '0'; num <= '15'; num++)
	{
		_putchar(num);
}
		_putchar('\n');

	}


}
