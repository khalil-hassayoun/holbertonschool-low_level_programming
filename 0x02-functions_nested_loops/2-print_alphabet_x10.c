#include "holberton.h"
/**
*print_alphabet_x10 - 0
*Return: nothing
*/
void print_alphabet_x10(void)
{
char i;
int j;

for (j = 1; j <= 10; ++j)
{
for (i = 'a'; i <= 'z'; ++i)
{
_putchar(i);
}
_putchar('\n');
}
}
