#include <unistd.h>
/**
 *_putchar - Writes the char c to stdout
 *@c: Char to print
 *
 *
 *Return: Returns 1 on success or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
