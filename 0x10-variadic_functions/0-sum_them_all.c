#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all paeameters
 * @n: number of parameter
 * @...: parameter to calculate the sum of
 * Return: 0 if n == 0
 * else return sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, s = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
