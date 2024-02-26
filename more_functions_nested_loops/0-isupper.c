#include "main.h"
/**
 *_isupper - Program checks for uppercase
 *
 *@c: character that is being checked
 *
 *Return: This program returns 1 if uppercase and returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		{
		return (1);
		}
	else if (c >= 'a' && c <= 'z')
		{
		return (0);
		}
	return (0);
}
