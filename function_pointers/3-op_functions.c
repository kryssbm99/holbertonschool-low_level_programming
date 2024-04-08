#include "3-calc.h"

/**
 *op_add - Returns the result of the sum of a by b
 *@a: First int
 *@b: Second int
 *Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Returns the result of the subtraction of a by b
 *@a: First int
 *@b: Second int
 *Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Returns the result of the multiplication of a by b
 *@a: First int
 *@b: Second int
 *Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Returns the result of the division of a by b
 *@a: First int
 *@b: Second int
 *Return: Result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - Returns the remainder of the division of a by b
 *@a: First int
 *@b: Second int
 *Return: Remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
