#include "main.h"
#include <stdio.h>

/**
 * main - prints name of this program.
 * @argc: number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on succes.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
