#include "main.h"
#include <stdlib.h>
/**
 * free_grid - allocate a grid, make space and free space
 * @grid: takes the width of grid
 * @height: hight of grid
 * Return: free grid
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
