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
	size_t len;

	len = strlen(needle);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (!strncmp(haystack, needle, len))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
