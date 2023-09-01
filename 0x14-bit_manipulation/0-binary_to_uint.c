#include "main.h"
/**
 * binary_to_uint - change binary no. to int (unsigned)
 * @b: no. to change
 * Return: changed no.
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int home;

	if (!b)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		home = 2 * home + (b[m] - '0');
	}
	return (home);
}
