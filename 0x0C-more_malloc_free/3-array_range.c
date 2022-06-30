#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum number
 * @max: as inplied
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arrpt;
	int diff, i;

	if (min > max)
		return (NULL);
	diff = max - min;
	arrpt = malloc(sizeof(int) * (diff + 1));
	if (arrpt == NULL)
		return (NULL);
	for (i = 0; i <= diff; min++, i++)
	{
		arrpt[i] = min;
	}
	return (arrpt);
}
