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
	int i;

	if (argc >= 0 && **argv)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
