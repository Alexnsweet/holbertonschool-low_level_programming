#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{	return;	}

	printf("Name: ");
	if (d->name == NULL)
	{	printf("(nil)");	}
	else
	{	printf("%s", d->name);	}
	printf("\n");

	printf("Age: ");
	printf("%f", d->age);
	printf("\n");

	printf("Owner: ");
	if (d->owner == NULL)
	{	printf("(nil)");	}
	else
	{	printf("%s", d->owner);	}
	printf("\n");
}
