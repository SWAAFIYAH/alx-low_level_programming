#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks a digit in a string
 * @str: string array
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int k;

	k = 0;
	while (k < strlen(str))
	{
		if (!isdigit(str[k]))
		{
			return (0);
		}
		k++;
	}
	return (1);
}
/**
 * main - prints the name of a programme
 * @argc: counts argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m;
	int n;
	int sum = 0;

	m = 1;
	while (m < argc)
	{
		if (check_num(argv[m]))
		{
		n = atoi(argv[m]);
		sum += n;
		}
		else
		{
		printf("Error\n");
		return (1);
		}
		m++;
	}
	printf("%d\n", sum);
	return (0);
}
