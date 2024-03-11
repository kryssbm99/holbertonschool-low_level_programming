#include <stdlib.h>
#include <stdio.h>
/**
 *main - argc and argv function
 *
 *@argc: Argument counter
 *@argv: Argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 0 && **argv)
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
