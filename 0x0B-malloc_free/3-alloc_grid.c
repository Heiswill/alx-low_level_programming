#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2D
 * array of integers.
 * @width: array columns
 * @height: array rows
 * Return: pointer to the array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			arr[i][j] = 0;
	return (arr);	
}
