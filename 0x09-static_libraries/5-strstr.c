#include "main.h"
/**
 * _strstr - entry point for the programme
 * @needle: input
 * @haystack: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *d = needle;

		while (*c == *d && *d != '\0')
		{
			c++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
