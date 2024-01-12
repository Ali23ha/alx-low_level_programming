#include "main.h"

int correct_prime(int n, int z);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to check
 * @z: iterator
 * author: ali_hasan
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (correct_prime(n, n - 1));
}

/**
 * correct_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @z: iterator
 * Return: 1 if n is prime, 0 if not
 */
int correct_prime(int n, int z)
{
	if (z == 1)
		return (1);
	if (n % z == 0 && z > 0)
		return (0);
	return (correct_prime(n, z - 1));
}
