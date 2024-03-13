#include "main.h"
/*
 * string_nconcat - Function concatenates two strings using malloc
 * @s1: string 1 pointer to concat
 * @s2: string 2 pointer to concat
 * @n: unsigned int n variable
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t len1 = 0;
	size_t len2 = 0;
	size_t i;
	size_t j;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	result = (char *) malloc(len1 + n + 1);
	if (result == NULL)
	{
		exit(98);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i++] = s2[j];
	}
	result[i] = '\0';
	return (result);
}
