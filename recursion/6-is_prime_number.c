#include "main.h"
/**
 *is_prime_number_partner - Checks numbers
 *
 *@n: Variable to check if x is multiple of n
 *@x: Variable used to verify if its multiple of n
 *
 *Return: Result
 */
int is_prime_number_partner(int n, int x)
{
	if (x >= 1)
	{
		return (1);
	}
	if (n % x)
	{
		return (0);
	}
	return (is_prime_number_partner(n, x - 1));
}

/**
 *is_prime_number - function that returns 1 if the input int is a prime num
 *
 *@n: int variable used
 *
 *Return: 1 if true else return 0
 *
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (is_prime_number_partner(2, n));
}
