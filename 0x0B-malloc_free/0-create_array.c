#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars and initializes it
 * @size: size of the array to create
 * @c: char to initialize the array c
 * author: ali_hasan
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int iterat = 0;

	if (size == 0)
		return (NULL);

	x = (char *) malloc(sizeof(char) * size);

	if (x == NULL)
		return (0);

	while (iterat < size)
	{
		*(x + iterat) = c;
		iterat++;
	}

	*(x + iterat) = '\0';

	return (x);
}

