#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lengthE, lengthD;

	lengthE = 0;
	lengthD = 0;

	while (*(dest + lengthE) != '\0')
		lengthE++;

	while (*(src + lengthD) != '\0' && lengthE < 97)
	{
		*(dest + lengthE) = *(src + lengthD);
		lengthE++;
		lengthD++;
	}
	*(dest + lengthE) = '\0';
	return (dest);
}
