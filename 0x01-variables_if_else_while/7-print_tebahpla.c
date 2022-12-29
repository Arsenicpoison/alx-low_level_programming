#include <stdio.h>

/**
 * main - print alpabet in lowercase in reverse
 *
 * Return: 0
 */
int main(void)
{
	char leter;

	for (leter = 'z'; leter <= 'a'; leter++)
	{
		putchar(leter);
	}
	putchar(10);
	return (0);
}
