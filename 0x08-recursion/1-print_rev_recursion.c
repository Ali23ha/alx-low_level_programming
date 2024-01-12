#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse way
 * @s: pointer that forword string to print
 * autohr: ali_hasan
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
