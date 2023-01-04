#include "main.h"

/**
 * _isupper - check for uppercase character
 *@c:character to tes@c:character to test
 * Return: 1 if c is upper , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
