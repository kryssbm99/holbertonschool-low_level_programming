#include "main.h"
/**
 *_strlen_recursion - Function that returns the length of a string
 *
 *@s:Pointer for char s
 *
 *Return: counter
 */
int _strlen_recursion(char *s)
{
int counter = 0;
	if (*s)
	{
		counter++;
		counter += _strlen_recursion(++s);
	}
	return (counter);
}
