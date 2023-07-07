#include "main.h"
/**
 * _puts - prints a string to standard output
 * @s: the string
 * _putchar prints a new line
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}

