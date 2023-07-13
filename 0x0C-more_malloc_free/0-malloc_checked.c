#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - uses malloc to allocate memory
 * @b: memory to allocate
 * Return: the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
