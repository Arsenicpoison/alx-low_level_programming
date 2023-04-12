#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to s string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int length1, length2;
	int i, j;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (length1 = 0; s1[length1]; length1++)
		;
	for (length2 = 0; s2[length2]; length2++)
		;

	s = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!s)
		return (NULL);

	for (i = 0; i < length1; i++)
		s[i] = s1[i];

	for (j = 0; j < length2; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
