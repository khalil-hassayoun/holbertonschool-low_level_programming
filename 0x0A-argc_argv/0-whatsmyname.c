#include <stdio.h>
/**
 * main - print
 * @argc: arguement count
 * @argv: string
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	printf("%s\n", argv[0]);
	else
	{
	argv[0] = argv[4];
	printf("%s\n", argv[0]);
	}
	return (0);
}
