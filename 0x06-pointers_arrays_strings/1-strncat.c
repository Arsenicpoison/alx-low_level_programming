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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] != '\0';
	return (dest);
}
