#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog desc.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: define a new type struct dog with the above elements
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H */
