#include <stdio.h>
/**
 * main - print
 * @argv: arguments
 * @argc: number of arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
