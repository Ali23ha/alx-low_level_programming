#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string source
 * author: ali_hasan
 * Return: result(length)
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
