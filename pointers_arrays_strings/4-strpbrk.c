#include "main.h"
/**
 *_strpbrk - Function that searchers a string for any of a set of bytes
 *
 *@s:String Pointer
 *@accept:Accept Pointer
 *
 *Return: returns a pointer to s that matches accept or NULL if no byte found
 */
char *_strpbrk(char *s, char *accept)
{
int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
		s++;
	}

	return (NULL);
}
