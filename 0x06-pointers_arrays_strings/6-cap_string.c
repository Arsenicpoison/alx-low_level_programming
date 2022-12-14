#include "main.h"

/**
 * cap_string - capitalize a string
 * @s: string
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int i, j;

	char sep[] = ", \t\n\.;?\"(){}";

	for `.(i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
		if (i == 0)
		{
			if (s[i] >= 'a' && s[j] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
