#include "main.h"
/**
 * int _islower - checks for lowercase character
 * Return: 1 for lowercase character and 0 if else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}