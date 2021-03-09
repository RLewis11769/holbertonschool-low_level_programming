#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef PROTOTYPE_H
#define PROTOTYPE_H

void init_dog(struct dog *d, char *name, float age, char *owner);
/*
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
*/
#endif
