#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads file to stdoutput
 * @filename: file to read
 * @letters: letters to read
 * Return: no. of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *home;
	ssize_t fill;
	ssize_t a;
	ssize_t honey;

	fill = open(filename, O_RDONLY);
	if (fill == -1)
		return (0);
	home = malloc(sizeof(char) * letters);
	honey = read(fill, home, letters);
	a = write(STDOUT_FILENO, home, honey);
	free(home);
	close(fill);
	return (a);
}
