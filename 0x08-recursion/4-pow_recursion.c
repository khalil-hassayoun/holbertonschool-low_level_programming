#include "holberton.h"
/**
 * _pow_recursion - recursive implementation 
 * @x: base number
 * @y: exponent
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
	return (1);
if (y == 1)
	return (x);
if (y < 0)
	return (-1);
	return (x * _pow_recursion(x, --y));
}
