#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - mallocs assigned memory and sets to zero
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i != size; i++)
		*(s + (size * i)) = 0;
	return (s);
}
