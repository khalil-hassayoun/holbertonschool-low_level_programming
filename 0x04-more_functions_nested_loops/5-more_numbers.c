#include "holberton.h"

/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
**/
void more_numbers(void)
{
	int x;
	int z;
	int i;

	while (i < 10)
	{
	for (x = 0; x <= 14; x++)
	{
		z = a;
		if (x > 9)
		{
			z = x / 10;
		}
		_putchar(z + '0');
		if (x > 9)
		{
			_putchar(x % 10 + '0');
		}
	}
	_putchar('\n');
	i++;
	}
}
