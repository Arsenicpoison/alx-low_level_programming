#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: String.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recusion(s + 1);
	}
	else
	{
		_putchar("\n");
	}
}
