#include "main.h"

/**
 * get_endianness - Checks the systems byte order
 * Rerurn: Return 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int x;
	int little_or_big;

	x = 1;
	little_or_big = (int) (((chars *)&x)[0]);
	return (little_or_big);
}
