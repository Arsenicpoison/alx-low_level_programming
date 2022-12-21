#include "main.h"
/**
 * _strcpy - cpy a tsring in str desk
 * @src:source
 * @dest:destiny
 * Return:copy char
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0'
	return (dest);
}

