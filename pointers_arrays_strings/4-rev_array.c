#include "main.h"
/**
 *reverse_array - Function reverses an array of intergers
 *
 *@a: Variable to use for reverse
 *@n: n value to reverse
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
int x, y, rev, ver;

	for (x = 0, y = (n - 1); x < (n / 2); x++, y--)
	{
		rev = a[x];
		ver = a[y];
		a[x] = ver;
		a[y] = rev;
	}
}
