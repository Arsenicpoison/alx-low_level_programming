#include "main.h"
#include <stdio.h>

/**
 * main - prints a number of arguments passed through it.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on succes.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
