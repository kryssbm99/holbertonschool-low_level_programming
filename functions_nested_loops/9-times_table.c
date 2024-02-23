#include "main.h"
/**
 *times_table - Program prints the 9 times table, starting with 0
 *
 *Return: Void
 */
void times_table(void)
{
int i;
int j;
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int product = i * j;
			if (j < 9) {
				printf("%d, ", product);
			} else {
				printf("%d$", product);
			}
		}
	}
}
