#include "main.h"
#include <limits.h>
/**
 *_atoi - Program copies the string pointer to by src
 *
 *@s: destination pointer
 *
 *Return: void
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;

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
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (*s - '0');
		s++;
}
	return (result + sign);
}
