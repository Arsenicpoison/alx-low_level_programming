#include "main.h"

int recusion_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 *
 * Return: the result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recusion_sqrt(n, 0));
}

/**
 * recusion_sqrt - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure
 * @i: iterator
 *
 * Return: the result square root
 */
int recusion_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (recusion_sqrt(n, i + 1));
}
