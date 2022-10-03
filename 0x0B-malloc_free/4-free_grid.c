#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees grid
 *
 * @grid: grid
 * @height: height of grid
 *
 * Return: nothing(void)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
