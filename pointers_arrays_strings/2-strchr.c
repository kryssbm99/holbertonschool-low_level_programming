#include "main.h"
/**
 *_strchr - Function that locates a character in a string
 *
 *@s: Pointer for string
 *@c: Char c variable
 *
 *Return: Returns pointer to the first occurrence of char c in string s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);

}
