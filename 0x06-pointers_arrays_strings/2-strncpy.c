#include "main.h"

/**
 * _strncpy - copy n bytes from src to dest string
 * @dest:destiny
 * @src:source
 * @n:byes from src string
 * Return:destiny string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
