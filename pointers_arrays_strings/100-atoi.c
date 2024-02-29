#include "main.h"
#include <limits.h>
/**
 *_atoi - Program converts a string to an integer
 *
 *@s: destination pointer
 *
 *Return: result
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			sign *= -1;
		
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);

}




















}
