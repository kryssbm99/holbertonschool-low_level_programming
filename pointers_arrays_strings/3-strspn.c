#include "main.h"
/**
 *_strspn - Function that gets the length of a prefix substring
 *
 *@s: Pointer for a string
 *@accept: Pointer for accept
 *
 *Return: Function returns len
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int len;
int j;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			len++;
			break;
			}
		}
		if (s[i] != accept[j])
		{
		return (len);
		}
	}
	return (len);
}
