#include "main.h"
#include <stdlib.h>
/**
 * _strdup - creates new duplicated of str
 * @str: string to copy
 *
 * Return: pointer to new string or NULL if insufficient memory or str = NULL
 */
char *_strdup(char *str)
{
	int i = 0, j = 0, k = 0;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		k++;
		i++;
	}

	a = malloc((k + 1) * sizeof(*str));

	if (a == NULL)
	{
		return (NULL);
	}
	while (j < k)
	{
		a[j] = *str;
		j++;
		str++;
	}
	a[i] = '\0';
	return (a);
}
