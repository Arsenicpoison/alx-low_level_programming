#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: arguments
 * @argv: args
 * Return: int
**/
int main(int argc, char *argv[])
{
	int count1, count2;
	unsigned long mul;

	mul = 0;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (count1 < argc)
	{
	while (argv[count1][count2] != '\0')
	{
		if (argv[count1][count2] > 57 || argv[count1][count2] < 48)
		{
			printf("Error\n");
			exit(98);
		}
	}
		count1++;
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
