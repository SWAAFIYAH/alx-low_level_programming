#include "main.h"
/**
 * _strspn - programes entry point
 * @s: input value
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				z++;
				break;
			}
			else if (accept[z + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
