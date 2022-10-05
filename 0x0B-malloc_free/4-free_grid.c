#include "main.h"
/**
 * free_grid - frees a 2D grid
 * @grid: takes in width of grid
 * @height: height of grid
 *
 * Return: frees previously allocated grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
