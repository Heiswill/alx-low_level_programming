#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - prints array.
 * @left: first array element.
 * @right: last array element.
 * Return: Nothing.
 */
void print_array(int *array, size_t left, size_t right)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[right]);
}

/**
 * binary_search - A function that searches for a value in a sorted array
 * of integers using binary search algorithm.
 * @array: Arry of integers.
 * @size: Size of array.
 * @value: Data to search.
 * Return: -1 if data not in array.
 */
int binary_search(int *array, size_t size, int value)
{
	int *arr = array;
	size_t l = 0;
	size_t r = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	if (size == 1)
		return (array[l]);
	while (l < r)
	{
		print_array(arr, l, r);
		mid = (l + r) / 2;
		if (value == arr[mid])
			return (arr[mid]);
		else if (value < arr[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
