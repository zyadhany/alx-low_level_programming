#ifndef pi
#define pi

/**
 * struct dog - it's dog
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
