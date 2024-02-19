#include <stdio.h>

/**
 *main - main function
 *
 *Description: This program uses const char to make it as read only
 *Then we use the message variable with puts to print the message
 *
 *Return: Always returns 0
 */
int main(void)

{
const char *message = "\"Programming is like building a multilingual puzzle";

	   puts(message);

return (0);
}
