#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int size, i, j;
	char c;

	for (size =  0; s[size] != '\0'; size++)
		;
	j = size - 1;
	for (i = 0;j >= 0 && i < j; j--; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
