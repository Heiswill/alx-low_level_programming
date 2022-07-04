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
	char *cpyname, *cpyowner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;


	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	
	cpyname = malloc(sizeof(len_name + 1));
	if (my_dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	cpyowner = malloc(sizeof(len_owner + 1));
	if (my_dog == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
