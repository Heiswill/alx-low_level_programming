#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog.
 * @d: struct to initialize
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}