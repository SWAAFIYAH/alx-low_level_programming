#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: lists types of arguments
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *y, *z = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", z, va_arg(list, int));
					break;
				case 'x':
					printf("%s%f", z, va_arg(list, double));
					break;
				case 's':
					y = va_arg(list, char *);
					if (!y)
						y = "(nil)";
					printf("%s%s", z, y);
					break;
					default:
					x++;
					continue;
			}
			z = ",";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}

