#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Pointer to a number
 * @index: Index to switch
 * Return:1if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tick;

	tick = 1;
	tick -= tick << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1) /*checks if 1 at position*/
		*n = tick ^ *n;

	return (1);
}
