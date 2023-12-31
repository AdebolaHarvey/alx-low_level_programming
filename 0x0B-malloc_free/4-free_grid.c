#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Frees a two dimensional grid.
  * @grid: The pointing value of grid.
  * @height: The height of the grid.
  *
  * Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
