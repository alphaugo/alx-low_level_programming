#include "dog.h"
#include <stddef.h>
/**
 * init_dog - fuction that takes in some parameters
 * @dog: a pointer to the structure dog
 * @name: a parameter that takes in the name of the dog
 * @age: takes in the age of the dog
 * @owner: holds the name of the owner
 * @d: points to the structure dog
 *
 * Description: fuction that take parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;


	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
