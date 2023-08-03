#include "main.h"
/**
 * flip_bits - returns bits you would need to flip
 * to other number
 * @m: number
 * @n: number
 * Return: no. of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s1, s2 = 0;
	unsigned long int decimal;
	unsigned long int integer = n ^ m;

	for (s1 = 63; s1 >= 0; s1--)
	{
		decimal = integer >> s1;
		if (decimal & 1)
			s2++;
	}
	return (s2);
}
