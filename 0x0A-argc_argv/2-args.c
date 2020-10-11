#include <stdio.h>
/**
 * main - print
 * @argv: arguments
 * @argc: number of arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
	printf("%s\n", argv[i++]);
	return (0);
}
