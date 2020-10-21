#include "holberton.h"
/**
 * *_strchr - locate a character in string
 *
 * @s: string 
 * @c: char 
 * Return: a located character.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{	
		return (&s[i]);
	}
	i++;
	}
	return (0);
}
