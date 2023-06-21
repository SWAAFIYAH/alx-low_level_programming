#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - print if the number is positive, 0 or negative
 * @i: Integer
 * Return: always 0
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is 0\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
