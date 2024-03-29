#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars and initializes it with specific char
 * @size: size of array to create
 * @c: specific char to use to initialize the array
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int d = 0;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	while (d < size)
	{
		a[d] = c;
		d++;
	}
	a[d] = '\0';
	return (a);
}
