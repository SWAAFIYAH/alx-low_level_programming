#include "main.h"
/**
 *  _strcmp - compares two strings
 *  @s1: first string
 *  @s2: string 2
 *  Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	k++;
	}
	return (0);
}
