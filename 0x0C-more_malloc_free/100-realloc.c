#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - rellocates a mem block
 * @ptr: pointer to previously memory
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of new mem block
 * Return:ptr without changes if new_size == old_size
 * NULL if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
