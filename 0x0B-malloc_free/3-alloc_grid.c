#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a dimensional array of integers
 * @width: dimension
 * @height: dimension
 * Return: NULL i width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int m, n, o, p;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		x[m] = malloc(sizeof(int) * width);
		if (x[m] == NULL)
		{
			for (n = m; n >= 0; n--)
			{
				free(x[n]);
			}
			free(x);
			return (NULL);
		}
	}
	for (o = 0; o < height; o++)
	{
		for (p = 0; p < width; p++)
		{
			x[o][p] = 0;
		}
	}
	return (x);
}

