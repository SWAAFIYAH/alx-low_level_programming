#include <stdio.h>
/**
 * main - prints alphabets in lowercase followed by a new line
 * Return: always 0
 */
int main(void)
{
	char la;

	for  (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
