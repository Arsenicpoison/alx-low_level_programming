#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on succes.
 */
int main(int argc, char *argv[])
{
	int number;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		number = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", number);
	}

	return (0);
}
