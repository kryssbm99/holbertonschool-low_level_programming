#include "main.h"
/**
 *_strncpy - Function copies a string
 *
 *@dest: Destination of string
 *@src: Source of string
 *@n: n value
 *
 *Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

		while (x < n)
		{
			dest[x] = '\0';
			x++;
		}
		return (dest);
}
