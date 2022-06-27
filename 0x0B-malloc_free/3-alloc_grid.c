#include "main.h"
#include <stdlib.h>

/** alloc_grid - function that returns a pointer to a 2D array of integers.
 * @width: array columns
 * @height: array rows
 * Return: pointer to the array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr[];
	int i = 0;

	for (i = &*arr[0][0]; i <= &*arr[height - 1][width - 1]; i++)
		arr[i][j] = 0;
	return (arr);
}
