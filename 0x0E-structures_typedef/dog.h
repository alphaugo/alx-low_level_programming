#ifndef DOG
#define DOG
/**
 * struct dog - structure
 * @name: a member for the names
 * @age: member of dog for age record
 * @owner: takes the name of the owner
 * Description: the description of the dog
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

