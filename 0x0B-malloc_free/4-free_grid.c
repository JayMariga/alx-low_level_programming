#include <stdlib.h>

/**
 * free_grid - Frees an allocated grid
 * @grid: A pointer to 2 Dimensional array
 * @height: Is the height of array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
height--;

while (height >= 0)
{
	free(*(grid + height));
	height--;
}
free(grid);
}
