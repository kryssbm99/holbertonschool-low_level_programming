#include "main.h"
/**
 *factorial - Function that returns the factorial of a given number
 *
 *@n:value for factorial
 *
 *Return: returns 1 or factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return(n * factorial(n - 1));
	}
	return (1);
}
