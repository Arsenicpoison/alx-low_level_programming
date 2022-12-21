#include "main.h"

/**
 * _strcat - concatenate 2 trings
 * @dest:destiny
 * @src:source
 * @n:bytes from src
 * Return:Destiny string dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int index, size;

	for (size = 0; dest[size] != '\0'; size++)
		;
	for (index = size; n > 0 && src[index - size] != '\0'; index++, n--)
		dest[index] = src[index - size];
	dest[index] = '\0';
	return (dest);
}
