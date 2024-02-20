#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main function
 *
 *Description:This program assigns a random number to variable n every time
 *The purpose of this program is to print the last digit of variable n
 *And find if its greater than 5, less than 5 or = 0
 *
 *Return: Always returns 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if ((last < 6) && (last != 0))
	{
		printf("Last digit of %d is %d and is less than 6\n", n, last);
	}

	return (0);
}
