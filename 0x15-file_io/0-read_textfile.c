#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads text file and print to std output
 * @letters: no. of lettersfor reading
 * @filename: file to be read
 * Return: no. of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pointer;
	ssize_t integer;
	ssize_t mass;
	ssize_t world;

	integer = open(filename, O_RDONLY);
	if (integer == -1)
		return (0);
	pointer = malloc(sizeof(char) * letters);
	world = read(integer, pointer, letters);
	mass = write(STDOUT_FILENO, pointer, world);
	free(pointer);
	close(integer);
	return (mass);
}
