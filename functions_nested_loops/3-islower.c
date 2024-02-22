#include "main.h"
/**
 *_islower - Program checks for lowercase
 *
 *@c: character that is being checked
 *
 *Return: This program returns 1 if lower case and returns 0 otherwise
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
	return (0);
}
