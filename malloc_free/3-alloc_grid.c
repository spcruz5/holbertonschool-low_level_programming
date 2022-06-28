#include <stdlib.h>
#inclide "main.h"

/**
 *alloc_grid - grid of zeros
 *@width: width
 *@height: height
 *Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
		for (h--; h >= 0; h--)
			free(grid[h]);
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	return (grid);
}
