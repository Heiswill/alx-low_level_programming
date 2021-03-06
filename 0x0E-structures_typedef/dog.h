#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog desc.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: define a new type struct dog with the above elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
