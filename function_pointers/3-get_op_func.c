#include <stddef.h>
#include "3-calc.h"

/**
 *get_op_func - Selects the correct operator function
 *@s: Operator passed as argument
 *Return: Pointer to the function that corresponds to the operator or NULL
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t opfunc[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (opfunc[i].operators != NULL)
	{
		if (*(opfunc[i].operators) == *s && *(s + 1) == '\0')
			return (opfunc[i].f);
		i++;
	}
		return (NULL);
}
