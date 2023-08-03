#include "main.h"
/**
 *  get_bit - gets bit
 *  @index: index
 *  @n: int
 *  Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int decimal;

	if (index > 63)
		return (-1);
	decimal = (n >> index) & 1;
	return (decimal);
}
