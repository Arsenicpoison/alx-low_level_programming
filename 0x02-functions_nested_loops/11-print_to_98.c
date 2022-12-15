#include "main.h"

/**
 * print_to_98 - print all natural number from n to 98
 * @n: n
 * Return: result
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n > 98; n--)
	{
		printf("%d ,", n);
	}
	printf("98\n");
}
