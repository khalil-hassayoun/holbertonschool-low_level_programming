#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
{
		s++;
		i++;
		}
	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: character
 * Return: On success 1
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _atoi - Transforms str to int
* @s: string
* Return: Integer
*/
int _atoi(char *s)
{
        int i, fn = 1, ne = 1;
        unsigned int n = 0;

        i = 0;
        while (s[i] && fn)
        {
                if (s[i] == '-' && !n)
                        ne *= -1;
                if (s[i] >= '0' && s[i] <= '9' && fn)
                {
                        n *= 10;
                        n += s[i] - '0';
                }
                else if (n > 0)
                        fn = 0;
                i++;
        };
        n *= ne;
        return (n);
}

/**
* fail - function that returns an error on exit
* @void: void
* Return: exit
*/
void fail(void)
{
	char *error;
	int i;

	error = "Error";

	for (i = 0; error[i] != '\0'; i++)
		_putchar(error[i]);
	_putchar('\n');
	exit(98);
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: returns zero, or exits with 98 if incorrect number of args
 */
int main(int argc, char *argv[])
{
	int i, j, num1size, num2size;

	(void) argv;
	if (argc != 3)
	{
		errorexit();
	}
	for (j = 1; j <= 2; j++)
		for (i = 0; argv[j][i] != '\0'; i++)
			if (argv[j][i] < '0' || argv[j][i] > '9')
				errorexit();
	num1size = _strlen(argv[1]);
	num2size = _strlen(argv[2]);
	printf("n1: %d\nn2: %d\n", num1size, num2size);
	return (0);
}

/*num1[i] - '0'  * num2[i] - '0';*/
