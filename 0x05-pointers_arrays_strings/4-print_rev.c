#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '0\'; length++)
		;
	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar(10);
}
