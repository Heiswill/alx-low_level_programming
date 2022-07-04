#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new struct dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
