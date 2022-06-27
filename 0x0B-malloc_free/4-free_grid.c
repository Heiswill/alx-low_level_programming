#include "main.h
#include <stdlib.h>

/**
 * free_grid = function that free a 2d array of integers.
 * @grid: array input
 * @height: height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
