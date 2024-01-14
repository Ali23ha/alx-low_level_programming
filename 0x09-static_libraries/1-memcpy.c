#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area to copy from
 * @n: number of bytes
 * author: ali_hasan
 * Return: *destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
