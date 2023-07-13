#include "main.h"
#include <stdlib.h>
/**
 * _calloc - uses malloc to allocate mem for array
 * @nmemb: - number of elements
 * @size: size of byte
 * Return: pointer to allocated mem
 * NULL if size or nmemb is 0
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (k = 0; k < (nmemb * size); k++)
		x[k] = 0;
	return (x);
}


