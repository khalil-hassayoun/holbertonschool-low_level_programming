#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - rev_string of a string.
 * @s: char to define the string
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char a, b;

	while (s[i] != '\0')
	i++;
	i = i - 1;
	while (i > j)
	{
		a = s[j];
		b = s[i];
		s[j] = b;
		s[i] = a;
		i--;
		j++;
	}
}
