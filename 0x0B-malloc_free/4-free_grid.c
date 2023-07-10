#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - used to free a 2d array
 * @grid: - the parameter for grid
 * @height: - the parameter for height dimension
 * Return: none
*/
void free_grid(int **grid, int height)
{
int v;

for (v = 0; v < height; v++)
{
free(grid[v]);
}
free(grid);
}
