#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Main Entry
 * @nmemb: input
 * @size: input
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < (nmemb * size); count++)
	{
		pointer[count] = 0;
	}
	return (pointer);
}
