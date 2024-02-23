#include "main.h"
/**
 *jack_bauer - Program prints every min of the day starting from 00:00 to 23:59
 *
 *Return: Returns void
 */
void jack_bauer(void)
{
int x;
int y;
	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');

		}
	}


}
