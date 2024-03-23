#include "variadic_functions.h"
/**
 *print_numbers - Function prints numbers followed by a new line
 *@separator: String pointer to be printed
 *@n: Value of the number of ints
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int v;
	va_list val;

		va_start(val, n);

		for (i = 0; i < n; i++)
		{
			v = va_arg(val, int);
			printf("%i", v);
			if (separator != NULL && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		va_end(val);

		printf("\n");
}
