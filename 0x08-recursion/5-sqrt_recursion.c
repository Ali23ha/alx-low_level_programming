#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * real_sqrt_recursion - recurses to find the natural sqrt
 * @n: number to calculate the square root
 * @x: iterator
 * author: ali_hasan
 * Return: the resulting square root
 */
int real_sqrt_recursion(int n, int x);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - recurses to find the natural sqrt
 * @n: number to calculate the square root
 * @x: iterator
 * author: ali_hasan
 * Return: the resulting square root
 */
int real_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (real_sqrt_recursion(n, x + 1));
}
