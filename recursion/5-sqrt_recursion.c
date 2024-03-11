#include "main.h"
/**
 *H - Function finds the smallest int
 *
 *@n: n int variable
 *@res: result int variable
 *
 *Return: Returns res
 */
int H(int n, int res)
{
	if (res * res == n)
	{
		return (res);
	}
	else if (res * res > n)
	{
		return (res - 1);
	}
	else
		return (H(n, res + 1));
}
/**
 *_sqrt_recursion - Function that returns the natural square root of a number
 *
 *@n: int variable
 *
 *Return: H function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (H(n, 0));
}
