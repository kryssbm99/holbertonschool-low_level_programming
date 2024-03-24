#include "variadic_functions.h"
#include "print1.c"
#include "print2.c"
#include "print3.c"
#include "print4.c"

/**
 *print_all -  function that prints anything.
 *@format: input types
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *space = "";
	va_list par;

	type style[] = {
		{'c', printchar},
		{'i', printint},
		{'f', printfloat},
		{'s', printstring}
	};

	va_start(par, format);

	i = 0;
		while (format && format[i])
		{
			j = 0;
			while (style[j].t)
			{
				if (style[j].t == format[i])
				{
					printf("%s", space);
					style[j].f(par);
					space = ", ";
				}
				j++;
			}
			i++;
		}

	va_end(par);
	printf("\n");
}
