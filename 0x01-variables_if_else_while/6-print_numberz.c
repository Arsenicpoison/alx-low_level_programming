#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 48; number <= 58; number++)
	{
		putchar(number);
	}
	putchar(10);
	return (0);
}
