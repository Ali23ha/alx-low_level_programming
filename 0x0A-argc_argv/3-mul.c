#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments 
 * @argv: the values of argumants
 * author: ali_hasan
 * Return: 0 if succes,otherwise return 1
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}
