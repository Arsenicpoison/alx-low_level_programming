#include <stdlib.h>
#include "main.h"
/**
 * count_word - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, ca, w;

	flag = 0;
	w = 0;

	for (ca = 0; s[ca] != '\0'; ca++)
	{
		if (s[ca] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - split a string into words
 * @str: string to split
 * Return: pointer to an array of string
 * or NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, k = 0, len = 0, words, ca = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (ca)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (ca + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - ca;
				k++;
				ca = 0;
			}
		}
		else if (ca++ == 0)
			start = a;
	}

	matrix[k] = NULL;

	return (matrix);
}
