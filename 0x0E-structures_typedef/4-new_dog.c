#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * _strcpy - copies string
 * @dest: where string is copied to
 * @src: where string is copied from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, z;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (z = 0; z < len; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: success for pointer to dog
 * NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner ==  NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
