#include "main.h"
/**
 * _abs - computer the absolute value of an integer.
 * @n: Integer number
 * Return:Absolute number of a given integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
