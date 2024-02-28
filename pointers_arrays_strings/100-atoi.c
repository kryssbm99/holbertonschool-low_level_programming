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
int result = 0;
int overflow = 0;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}
		if (*s == '-')
		{
			sign = -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}

	while (*s >= '0' && *s <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 &&
						*s - '0' > INT_MAX % 10))
		{
			overflow = 1;
			break;
		}
		result = result * 10 + (*s - '0');
		s++;
		}
			result *= sign;
			if (overflow)
			{
			return (sign == 1 ? INT_MAX : INT_MIN);
			}
	return (result);
}
