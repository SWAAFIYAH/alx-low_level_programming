#include "main.h"
/**
 * _memset - fills a memory space with a specific value
 * @s: memory starting adress
 * @b: the value
 * @n: bytes to be changed
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
