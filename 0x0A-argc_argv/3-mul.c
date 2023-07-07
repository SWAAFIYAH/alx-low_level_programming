#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int j, k, m, n, p, q;

	j = 0;
	k = 0;
	m = 0;
	n = 0;
	p = 0;
	q = 0;

	while (s[n] != '\0')
		n++;
	while (j < n && p == 0)
	{
		if (s[j] == '-')
			++k;

		if (s[j] >= '0' && s[j] <= '9')
		{
			q = s[j] - '0';
			if (k % 2)
				q = -q;
			m = m * 10 + q;
			p = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			p = 0;
		}
		j++;
	}
	if (p == 0)
		return (0);
	return (m);
}
/**
 * main - multiply two numbers
 * @argc: no of arguments
 * @argv: arguments' array
 * Return: 0 (success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int k, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	k = num1 * num2;

	printf("%d\n", k);

	return (0);
}
