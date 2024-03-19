#include "dog.h"
/**
 * new_dog - Function creates a new dog
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 * Return: Returns the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ogdog;
	int i = 0;
	int j = 0;
	int k = 0;

while (name[i])
	i++;
while (owner[j])
	j++;
ogdog = malloc(sizeof(dog_t));
if (ogdog == NULL)
{
	free(ogdog);
	return (NULL);
}

ogdog->owner = malloc(j * sizeof(ogdog->owner));
ogdog->age = age;
ogdog->name = malloc(i * sizeof(ogdog->name));

if (ogdog->name == NULL || ogdog->owner == NULL)
{
	free(ogdog->owner);
	free(ogdog->name);
	free(ogdog);
	return (NULL);
}
for (k = 0; k <= i; k++)
	ogdog->name[k] = name[k];

for (k = 0; k <= j; k++)
	ogdog->owner[k] = owner[k];

return (ogdog);
}
