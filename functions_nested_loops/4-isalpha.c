#include "main.h"
/**
 *_isalpha - Program checks for lowercase
 *
 *@c: character that is being checked
 *
 *Return: This program returns 1 if lower or uppercase, returns 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
	else if (c >= 'A' && c <= 'Z')
		{
		return (1);
		}
	return (0);
}
