#include <stdio.h>
#include <stdlib.h>
/**
 * main - print
 * @argv: arguments
 * @argc: number of arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int results;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	results = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", results);
	return (0);
}
