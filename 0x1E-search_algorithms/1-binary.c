#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - prints array.
 * @array: Array of integers.
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
	unsigned int left = 0, right;
	int middle;

	right = size - 1;

	if (array == NULL)
		return (-1);
	if (size == 1)
	{
		return (array[left]);
	}
	while (right >= left)
	{
		if (left == 0 && right == 0)
			return (-1);
		print_array(array, left, right);
		middle = (right + left) / 2;
		if (array[middle] == value)
			return (array[middle]);
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle;
		}
	}
	return (-1);
}
