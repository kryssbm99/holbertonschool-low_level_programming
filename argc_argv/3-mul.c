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
int x;
int res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		for (x = 1; x < argc; x++)
		{
			res *= atoi(argv[x]);
		}
		printf("%d\n", res);

		return (0);
}
