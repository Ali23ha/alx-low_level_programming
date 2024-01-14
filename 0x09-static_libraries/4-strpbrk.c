#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s:  parameter (string to search)
 * @accept: stringcontaining the destenation bytes
 * author: ali_hasan
 * Return: *s, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
