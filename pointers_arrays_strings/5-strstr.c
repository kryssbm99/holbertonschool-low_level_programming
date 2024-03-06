#include "main.h"
#include <string.h>
/**
 *_strstr - Function that locates a substring
 *
 *@haystack: Pointer for haystack
 *@needle: Pointer for needle
 *
 *Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
	char*start = haystack;
	char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack == *needle_ptr)
		{
			haystack++;
			needle_ptr++;
		}
			if (*needle_ptr == '\0')
			{
				return (start);
			}

			haystack = start + 1;
	}
	return (NULL);

}
