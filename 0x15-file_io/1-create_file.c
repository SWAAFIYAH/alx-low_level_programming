#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - create file
 * @filename: filename
 * @text_content: string to write in file
 * Return: -1 if file fails or 1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int pot, wood, hood = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (hood = 0; text_content[hood];)
			hood++;
	}
	pot = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wood = write(pot, text_content, hood);
	if (pot == -1 || wood == -1)
		return (-1);
	close(pot);
	return (1);
}
