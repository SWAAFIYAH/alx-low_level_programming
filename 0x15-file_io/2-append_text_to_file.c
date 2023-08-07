#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - append text at end of file
 * @text_content: text to add
 * @filename: filename
 * Return: -1 for NULL of file fais
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int abs, c, score = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (score = 0; text_content[score];)
			score++;
	}
	abs = open(filename, O_WRONLY | O_APPEND);
	c = write(abs, text_content, score);
	if (abs == -1 || c == -1)
		return (-1);
	close(abs);
	return (1);
}
