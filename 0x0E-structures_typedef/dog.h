#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog name age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name of dog
 *
 * Long description of dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
