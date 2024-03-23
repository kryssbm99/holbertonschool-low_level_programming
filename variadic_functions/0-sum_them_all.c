#include "variadic_functions.h"
#include "stdarg.h"
/**
 *sum_them_all - Function that returns the sum of all its parameters
 *@n: Numbers of values
 *Return: Function returns sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	int v = 0;
	int w = 0;

	if (n != 0)
	{
		va_start(val, n);

		for (i = 0; i < n; i++)
		{
			w = va_arg(val, int);
			v += w;
		}
		va_end(val);
		return (v);
	}
	else
	{
		return (0);
	}
}

