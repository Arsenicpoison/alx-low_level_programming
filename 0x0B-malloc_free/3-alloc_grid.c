#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates space for a 2D array of integers
 * @width: width of array
 * @height: hight of array
 *
 * Return: pointer to a 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	if (width * height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
