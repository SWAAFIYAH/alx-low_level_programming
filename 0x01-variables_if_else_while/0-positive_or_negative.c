#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive, 0 or negative
 * Return: always 0
 */
int main(void)
{
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("d is 0\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
