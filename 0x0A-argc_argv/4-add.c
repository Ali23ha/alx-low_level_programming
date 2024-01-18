#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: numbers of the arguments
 * @argv: values of the arguments
 * author: ali_hasan
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, d, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (d = 0; argv[num][d]; d++)
		{
			if (argv[num][d] < '0' || argv[num][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
