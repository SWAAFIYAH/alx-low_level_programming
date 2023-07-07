#include "main.h"
/**
 * _strcpy - copies a string
 * @src: to copy from
 * @dest: to copy to
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int j = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for (; j < k; j++)
	{
		dest[j] = src[j];
	}
	dest[k] = '\0';
	return (dest);
}
