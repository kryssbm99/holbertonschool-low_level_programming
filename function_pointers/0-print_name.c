#include "function_pointers.h"
/**
 *print_name - Function that prints a name
 *@name: Pointer for name
 *@f: Pointer for f
 *
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
