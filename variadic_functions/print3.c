#include "variadic_functions.h"
/**
 *printint - Function prints integers
 *@par: Parameter Variable
 */
  void printint(va_list par)
{
	                printf("%d", va_arg(par, int));
}
