#include "variadic_functions.h"
/**
 *print_strings - Function that prints strings, followed by a new line.
 *@separator: String to be printed between strings
 *@n: Number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	char *v;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		v = va_arg(val, char*);
		if (v != NULL)
		{
			printf("%s", v);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(val);

	printf("\n");
}
