#include <stdio.h>
#include "main.h"
/**
 * main - prints name of programme to stdoutput
 * @argv: array argument
 * @argc: no. of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
