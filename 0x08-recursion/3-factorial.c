#include "holberton.h"
/**
 * factorial - get factorial of a number
 * @n: number to get factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	int fact;
	fact = 0;
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
if (n == 1)
	return (1);
fact = n * factorial(n - 1);
	return (fact);
}
