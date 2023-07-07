#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints minimum no. of coins
 * to make change
 * for amount of money
 * @argc: no. of arguments
 * @argv: arguments' array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int money[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		i = atoi(argv[1]);
		k = 0;
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= money[j])
		{
			k++;
			i -= money[j];
		}
	}
	printf("%d\n", k);
	return (0);
}
