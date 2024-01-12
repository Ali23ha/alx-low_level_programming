#include "main.h"

/**
 * author: Ali Hasan  
 * _puts_recursion - this function is for printing a string
 * _putchar writes the character c to stdout
 * *s: it is a pointer 
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
        _putchar('\n');
	}
}
