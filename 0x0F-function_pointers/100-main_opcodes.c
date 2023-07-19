#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: no. of arguments
 * @argv: agument's array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, k;
	char *x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	x = (char *)main;
	for (k = 0; k < j; k++)
	{
		if (k == j - 1)
		{
			printf("%02hhx\n", x[k]);
			break;
		}
		printf("%02hhx\n", x[k]);
	}
	return (0);
}

