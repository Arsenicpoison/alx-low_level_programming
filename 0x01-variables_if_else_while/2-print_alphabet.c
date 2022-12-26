#include <stdio.h>

/**
 * main -print the alphabet in lowercase
 *
 * Return: (0);
 */
int main(void)
{
	char leter;

	for (leter = 'a'; leter <= 'z'; leter++)
	{
		putchar(leter);
	}
	putchar(10);
	return (0);
}
