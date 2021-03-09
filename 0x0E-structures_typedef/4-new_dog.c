#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - copies string
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicated string or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	int x;
	int length = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	p = malloc(length * sizeof(char) + 1);
	if (p == 0)
		return (NULL);

	for (x = 0; x < length; x++)
		p[x] = str[x];
	p[x] = '\0';

	return (p);
}


/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog info
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = _strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = _strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
