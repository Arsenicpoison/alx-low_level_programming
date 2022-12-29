#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0
 */
int main(void)
{
	char leter;


	for (leter = '0'; leter <= '9'; leter++)
	{
		putchar(leter);
	}
	putchar(10);
	return (0);
}
