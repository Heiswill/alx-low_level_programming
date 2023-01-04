#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Function to linearly search xin arr[]. If x is
 * present then return its location , otherwise return -1.
 * @array: Array to traverse.
 * @size: Size of array.
 * @value: Data to find.
 * Return: -1 if data not found.
 */
int linear_search(int *array, size_t size, int value)
{
	int *arr = array;
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, arr[i]);
		if (arr[i] == value)
			return (i);
	}
	return (-1);
}
