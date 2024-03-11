#include "main.h"
/**
 *_pow_recursion - Function that return the value of x raised to the power of y
 *
 *@x: Value of x
 *@y: Value of y
 *
 *Return: if y lower than 0 return -1 else return 0
 */
int _pow_recursion(int x, int y)
{
int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		result = (x * _pow_recursion(x, --y));
	}
	return (result);
}
