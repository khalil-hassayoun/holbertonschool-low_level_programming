#include <stdio.h>
/**
* main - display the size of types
*
* Return: Always 0 (success)
*/
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %i byte(s)\n", sizeof(c));
printf("Size of a char: %i byte(s)\n", sizeof(i));
printf("Size of a char: %i byte(s)\n", sizeof(li));
printf("Size of a char: %i byte(s)\n", sizeof(lli));
printf("Size of a char: %i byte(s)\n", sizeof(f));
return (0);
}
