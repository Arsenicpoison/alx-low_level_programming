#include <stdio.h>

/**
 * main - print the alphabet except 'e' and 'q'
 *
 * Return: 0
 */
int main(void)
{
	char leter;

	for (leter = 'a'; leter <= 'z'; leter++)
	{
		if (leter == 'e' || leter == 'q')
		{
			continue;
		}
		else
		{
			putchar(leter);
		}
	}
	putchar(10);
	return (0);
}
