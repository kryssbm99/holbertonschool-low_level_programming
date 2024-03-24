#include "variadic_functions.h"
/**
 *printstring - Function prints a strings
 *@par: Parameter Variable
 */
void printstring(va_list par)
{
	char *s;
	s = va_arg(par, char*);

	if (s == NULL)
	{
		printf("(nil)");
	return;
	}
	printf("%s", s);
}
