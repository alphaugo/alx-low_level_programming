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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

