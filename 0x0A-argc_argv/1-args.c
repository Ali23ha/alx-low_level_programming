#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: parameter (number of arguments)
 * @argv: parameter (value of arguments)
 * author: ali_hasan
 * Return: 0 in Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
