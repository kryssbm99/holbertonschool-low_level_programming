#include "dog.h"
/**
 *print_field - Function that helps organize print_dog function
 *@field: Pointer for the fields inside d
 *
 */
void print_field(char *field)
{
	if (field == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", field);
	}
}

/**
 *print_dog - Function that prints a struct dog
 *@d: pointer for struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");
	print_field(d->name);

	printf("Age: ");
	if (d->age < 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%f\n", d->age);
	}

	printf("Owner: ");
	print_field(d->owner);
}
