#include "dog.h"
/**
 *init_dog -  Function that initialize a variable of type struct dog
 *@d: Pointer to dog header
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
