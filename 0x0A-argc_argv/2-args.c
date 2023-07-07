#include <stdio.h>
#include "main.h"
/**
 * main - prints the arguments it gets
 * @argc: no. of arguments
 * @argv: arguments' array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}

