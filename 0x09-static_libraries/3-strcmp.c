#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: parameter for first string
 * @s2: parameter for second string
 * author: ali_hasan
 * Return: less than 0 if s1 < s2, 0 if s1 = s2,
 * more than 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
