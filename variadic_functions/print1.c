#include "variadic_functions.h"
/**
 *printc - Function prints charachters
 *@par: Parameter Variable
 *
 */
void printchar(va_list par)
{
	printf("%c", va_arg(par, int));
}
