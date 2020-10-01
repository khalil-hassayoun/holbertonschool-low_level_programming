 #include "holberton.h"
#include <stdio.h>
/**
 * _strncat- check code for holbies.
 *@dest:var.
 *@src:var.
 *@n:var.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i] != '\0')
i++;
for (j = 0 ; j < n && src[j] != '\0' ; i++, j++)
dest[i] = src[j];
dest[i] = '\0';
return (dest);
}
