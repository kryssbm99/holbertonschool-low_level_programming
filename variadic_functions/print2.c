#include "variadic_functions.h"
/**
 *printfloat - Function prints floats
 *@par: Parameter value
 */
void printfloat(va_list par)
{
	printf("%f", va_arg(par, double));
}
