#include "main.h"
/**
 * _isupper - checks if its an uppercase letter
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
