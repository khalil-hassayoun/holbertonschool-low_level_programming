#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **array_range - creates an array
 *@min: min number
 *@max: max number
 *Return: returns pointer to array, or NULL if malloc failure
 */
int *array_range(int min, int max)
{
	int *p;
	int i, x = 0;

	if (min > max)
	return (NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
	return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		x++;
	}
	return (p);
}
