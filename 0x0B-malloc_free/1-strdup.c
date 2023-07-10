#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space
 * in a memory
 * contains a copy of the string
 * @str: string
 * Return: on success, a pointer to
 * duplicate string
 * and NULL for NULL
 */
char *_strdup(char *str)
{
	char *x;
	int z, w = 0;

	if (str == NULL)
		return (NULL);
	z = 0;
	while (str[z] != '\0')
		z++;
	x = malloc(sizeof(char) * (z + 1));
	if (x == NULL)
		return (NULL);
	for (w = 0;   str[w]; w++)
		x[w] = str[w];
	return (x);
}
