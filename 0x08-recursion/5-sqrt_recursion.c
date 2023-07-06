#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: integer
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates the squareroot of a number
 * @n: number to calculate the squareroot
 * @i: iterate number
 * Return: the squareroot
 */
int _sqrt(int n, int i)
{
	int sqrt = i * 1;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
