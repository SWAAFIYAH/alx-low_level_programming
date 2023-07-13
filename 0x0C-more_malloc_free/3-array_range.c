#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max:maximum value
 * Return: pointer to new array
 * NULL if min > max
 * NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *x;
	int k;

	if (min > max)
		return (NULL);
	x = malloc(sizeof(*x) * ((max - min) + 1));
	if (x == NULL)
		return (NULL);
	for (k = 0; min <= max; k++, min++)
		x[k] = min;
	return (x);
}
