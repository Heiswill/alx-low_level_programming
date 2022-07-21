#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given
 * index.
 * @n: Pointer toa number
 * @index: index to replacein the number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tick;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	tick = 1;
	tick = tick << index;
	*n = ((*n) | tick);
	return (1);
}
