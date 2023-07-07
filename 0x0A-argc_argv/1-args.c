#include <stdio.h>
#include "main.h"
/**
 * main - prints no. of arguments passed to programme
 * @argv: arguments' array
 * @argc: no. of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
