#include "main.h"
/**
 * _isalpha - finds alphabetic character
 * @c: char to be checked
 * Return: 1 if c is alphabet
 * 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
