#include "main.h"
/**
 * *_strcpy - Program copies the string pointer to by src
 *
 *@dest: destination pointer
 *@src: source pointer
 *
 *Return: void
 */
char *_strcpy(char *dest, char *src)
{
int x;

	for (x = 0; src[x]; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
