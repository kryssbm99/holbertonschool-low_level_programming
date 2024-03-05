#include "main.h"
/**
 *_memcpy - Function copies a memory area
 *
 *@dest: Destination Pointer
 *@src: Source Pointer
 *@n: Unsigned int variable
 *
 *Return: Program returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cpsrc = src;
	char *cpdest = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		cpdest[i] = cpsrc[i];
	}
	return (dest);
}
