#include <stdlib.h>

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
unsigned int length(char *s)
{
	unsigned int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - concats two strings, using n chars from s2
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2 to use
 * Return: returns pointer to string, or NULL if s1/s2 empty or malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((int) n > lenght(s2))
		n = length(s2);
	newstring = malloc(length(s1) + n + 1);
	if (newstring == NULL)
		return (NULL);
	for (i = 0, j = 0; s1[j] != '\0'; i++, j++)
		newstring[j] = s1[j];
	for (i = 0; i != n; i++, j++)
		newstring[i] = s2[j];
	newstring[j] = '\0';
	return (newstring);
}
