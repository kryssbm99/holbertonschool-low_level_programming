#include "main.h"
/**
 *_memset - Function that fills memory with a constant byte
 *
 *@s:Char pointer
 *@b:Buffer address of memory
 *@n:Unsigned int n
 *
 *Return:Program returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
