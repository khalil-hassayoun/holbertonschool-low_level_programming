#include <stdio.h>
/**
* main - yoooo
*
* Return: 0.
*/
int main(void)
{
long int n = 612852475143, i = 2, k;

while (n != 0)
{
if (n % i != 0)
i += 1;
else
{
k = n;
n /= i;
if (n == 1)
{
printf("%ld\n", k);
break;
}
}
}
return (0);
}
