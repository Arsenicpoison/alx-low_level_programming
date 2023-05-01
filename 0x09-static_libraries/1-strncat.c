#include "main.h"

/**
 * _strncat - Concatenate two trings
 * @dest: destiny
 * @src: source
 * @n: bytes from src
 * Return: Destiny string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;


	a = 0;
	while (dest[a] != '\0')
	{
		b++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);

}
