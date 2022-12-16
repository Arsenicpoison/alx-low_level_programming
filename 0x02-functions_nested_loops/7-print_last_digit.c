#include "main.h"

/**
 * print_last_digit - compute the absolute value of an integer.
 * @n: integer number
 * Return: Always (0)
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
	{
		r = (r * (-1));
	}
	_putchar('0' + r);
	return (r);
}
