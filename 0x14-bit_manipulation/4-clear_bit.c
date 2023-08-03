#include "main.h"
/**
 * clear_bit - sets bit value to 0
 * @index: index
 * @n: pointer
 * Return: -1 if fails
 * 1 if succeeds
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
