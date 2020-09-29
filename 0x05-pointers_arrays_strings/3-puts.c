#include "holberton.h"
/**
*_puts - 0
*@str: string
*Return: nothing;
*/
void _puts(char *str)
{
	int i;
	char c;
	for (i=0; str[i] !=0; i++)
{
	c = str[i];
 	_putchar(c);
}
	_putchar('\n');
}
