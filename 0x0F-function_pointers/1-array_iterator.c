#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints array element
 * @array: array
 * @size: elements to print
 * @action: pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
