#include "main.h"
/**
 * print_binary - prints binary
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int binary, hexa = 0;
	unsigned long int octal;

	for (binary = 63; binary >= 0; binary--)
	{
		octal = n >> binary;
		if (octal & 1)
		{
			_putchar('1');
			hexa++;
		}
		else if (hexa)
			_putchar('0');
	}
	if (!hexa)
		_putchar('0');
}
