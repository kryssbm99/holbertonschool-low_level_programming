#include "main.h"
#include <stdio.h>
/**
 *_strlen - _strlen main function
 *
 *
 *@s: a pointer to char s
 *
 *Return: c
 */
int _strlen(char *s)
{
int c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
