#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to print
 * @n: no. of intergers
 * @...: numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int x;

	va_start(nums, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nums, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
