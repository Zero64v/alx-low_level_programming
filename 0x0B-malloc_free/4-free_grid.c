#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free ed array
 * @grid: 2d grid
 * @height: height dim, of grid
 * Description: free memory of grid
 * Return: nothing
 *
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
