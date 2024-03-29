#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string
 * @separator: string to print
 * @n: no. of strings paased to function
 * @...: variable no
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *x;
	unsigned int y;

	va_start(strings, n);

	for (y = 0; y < n; y++)
	{
		x = va_arg(strings, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
