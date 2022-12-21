#include "main.h"

/**
 * _atoi - A string that convert a string in an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, int b = 0;
	int c = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			c *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (b >= 0)
		{
			b = b * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			b = b * 10 - (s[i] - '0');
			i++;
		}
	}
	c *= -1;
	return (b * c);
