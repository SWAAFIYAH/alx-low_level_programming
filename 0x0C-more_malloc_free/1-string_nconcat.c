#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concancates two strings
 * @n: number of bytes
 * @s1: first string
 * @s2: second string
 * Return: NULL if function fails
 * pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, w = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!s)
		return (NULL);
	while (x < length1)
	{
		s[x] = s1[x];
		x++;
	}
	while (n < length2 && x < (length1 + length2))
		s[x++] = s2[w++];
	s[x] = '\0';
	return (s);
}

