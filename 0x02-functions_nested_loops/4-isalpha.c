#include "holberton.h"
/**
*_isalpha - 0
*@c: integer
*Return: either 1 or 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


