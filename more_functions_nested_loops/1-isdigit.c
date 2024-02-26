#include "main.h"
/**
 *_isdigit - Program checks for digits and letters
 *
 *@c: character that is being checked
 *
 *Return: This program returns 1 if its digits, returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		{
		return (1);
		}
	else if (c >= 'a' && c <= 'z')
		{
		return (0);
		}
	return (0);
}
