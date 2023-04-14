#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int lengths1 = 0, lengths2 = 0;
	char *s;

	while (s1 && s1[lengths1])
	{
		lengths1++;
	}
	while (s2 && s2[lengths2])
	{
		lengths2++;
	}
	if (n < lengths2)
	{
		s = malloc(sizeof(char) * (lengths1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (lengths1 + lengths2 + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	while (i < lengths1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < lengths2 && i < (lengths1 + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= lengths2 && i < (lengths1 + lengths2))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
