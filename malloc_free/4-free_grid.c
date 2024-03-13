#include "main.h"
/**
 *free_grid - Function frees a 2 dimensional grid previously created
 *
 *@grid: Pointer to a pointer of grid
 *@height: int variable for height
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
