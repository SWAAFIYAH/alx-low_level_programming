#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * @o: integer
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\n')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; O--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
