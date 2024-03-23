#include "variadic_functions.h"
/**
 *print_all -  function that prints anything.
 *@format: input types
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char c;
	int i;
	float f;
	char *s;
	int index = 0;

	va_start(args, format);

	while ((c = format[index++]) != '\0')
	{
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				printf(", ");
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				printf(", ");
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				printf(", ");
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
	}
	printf("\n");

	va_end(args);
}
