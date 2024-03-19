#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog - Structure with basic information of a dog
 *@age: float value for age of dog
 *@name: char value for name of dog
 *@owner: char value for name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *
 *dog_t - Typedef for struct dog
 *
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
