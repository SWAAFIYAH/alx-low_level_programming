#include "main.h"
/**
 * _strpbrk - searches for a string
 * for any sets of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be serched for
 * Return: NULL if no byte is found
 * and a pointer to the byte if a set is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
