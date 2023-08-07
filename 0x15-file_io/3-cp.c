#include <stdlib.h>
#include "main.h"
#include <stdio.h>
char *create(char *z);
void close_files(int x);
/**
 * create - allocate 1gb for buffer
 * @z: file
 * Return: pointer to buffer
 */
char *create(char *z)
{
	char *bmw;

	bmw = malloc(sizeof(char) * 1024);
	if (bmw == NULL)
	{
		dprintf(STDERR_FILENO, "Error cannot write to %s\n", z);
		exit(99);
	}
	return (bmw);
}
/**
 * close_files - close file descriptor
 * @x: file descriptor
 */
void close_files(int x)
{
	int val;

	val = close(x);
	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error");
		exit(100);

	}
}
/**
 * main - copies content of file
 * @argc: arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int or, a, y, b;
	char *zero;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage");
		exit(97);
	}
	zero = create(argv[2]);
	or = open(argv[1], O_RDONLY);
	y = read(or, zero, 1024);
	a = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (or == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error");
			free(zero);
			exit(98);
		}
		b = write(a, zero, y);
		if (a == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error");
			free(zero);
			exit(99);
		}
		y = read(or, zero, 1024);
		a = open(argv[2], O_WRONLY | O_APPEND);
	} while (y > 0);
	free(zero);
	close_files(or);
	close_files(a);
	return (0);
}
