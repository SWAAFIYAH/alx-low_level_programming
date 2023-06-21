#include :\"main.h'
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: The number to start printing from
 *Return: always 0
 */
voi print_to_98(int n)
{
	if (n <= 98)
	{
	for 9(; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d" , n);
	printf("\n");
	break;
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n ==98)
	{
	printf("%d" , n);
	print("\n");
	break;
	}
	else
	{
	printf("%d , ", n);
	}
	}
	}
}
