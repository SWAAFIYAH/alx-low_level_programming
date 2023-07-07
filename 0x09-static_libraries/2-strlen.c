#include "main.h"
/**
 * _strlen - a program that returns the length of a string
 * @s: the string in which length is to be calculated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
