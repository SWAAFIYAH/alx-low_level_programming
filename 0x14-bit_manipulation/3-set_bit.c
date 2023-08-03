 #include "main.h"
/**
 * set_bit - sets bit
 * @index: index
 * @n: pointer
 * Return: -1 if fails
 * 1 if succeeds
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
