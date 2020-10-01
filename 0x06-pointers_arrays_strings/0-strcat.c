#include"holberton.h"
/**
 * _strcat - function concat 2 strings.
 * @dest: pointer
 * @src: pointer
 * Return: 0
 *
*/
char *_strcat(char *dest, char *src)
{
int n, b;
b = 0;
while (dest[b] != '\0')
b++;
n = 0;
while (src[n] != '\0')
	{
*(dest + b) = *(src + n);
n++;
b++;
	}
return (dest);
}
