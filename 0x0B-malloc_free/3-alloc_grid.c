#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: no of rows
 * @height: no of columns
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		i[j] = malloc(sizeof(int) * width);

		if (i[j] == NULL)
		{
			free(i);
			for (k = 0; k <= height; k++)
				free(i[k]);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			i[j][k] = 0;
	}

	return (i);
}
