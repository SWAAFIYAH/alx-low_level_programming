#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two numbers
 * @a: number
 * @b: number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of two numbers
 * @a: number
 * @b: number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of two numbers
 * @a: number
 * @b: number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns dividend for two numbers
 * @a: number
 * @b: number
 * Return: a divide by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the reminder of division of two numbers
 * @a: number
 * @b: number
 * Return: reminder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
