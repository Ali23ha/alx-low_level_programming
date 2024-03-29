#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: parameter (destenation to buffer in which we copy the string)
 * @src: string to be copied
 * author: ali_hasan
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, x;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

