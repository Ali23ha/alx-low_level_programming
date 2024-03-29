#include "main.h"

/**
 * factorial - return factorial num
 * @n: integer num
 * author: ali_hasan
 * Return: "1" or "-1"
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
