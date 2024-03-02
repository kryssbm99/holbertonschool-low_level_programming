#include "main.h"
/**
 *_strncat - Concatenates two strings
 *
 *@dest: Destination Pointer
 *@src: Source Pointer
 *@n: int variable used to use n bytes from
 *
 *Return: Destination
 */
char *_strncat(char *dest, char *src, int n)
{
int x =  0;
int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y] && y < n)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	return (dest);



}
