#include "holberton.h"
/**
*times_table - 0
*
*Return: nothing
*/
void times_table(void)
{
int k, s;

for (k = 0; k <= 9; ++k)
{
for (s = 0; s <= 9; ++s)
{
if (k * s > 9)
{
if (s != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar((k * s) / 10 + '0');
_putchar((k * s) % 10 + '0');
}
else
{
if (s != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((k * s) + '0');
}

}
_putchar('\n');
}
}
