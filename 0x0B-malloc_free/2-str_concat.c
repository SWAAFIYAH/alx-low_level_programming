#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concancates two strings
 * @s1: string 1
 * @s2: second string
 * Return: concancated strings
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, c = 0, d = 0, e = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[c])
		c++;
	e = a + c;
	x = malloc((sizeof(char) * e) + 1);
	if (x == NULL)
		return (NULL);
	c = 0;

	while (d < e)
	{
		if (d <= a)
			x[d] = s1[d];
		if (d >= a)
		{
			x[d] = s2[c];
			c++;
		}
		d++;
	}
	x[d] = '\0';
	return (x);
}
