#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks for a digit from 0 to 9.
 * @c: charater to check
 * Return: return 1 if c is a digit, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * main - Adds all given numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on succes.
 */
int main(int argc, char *argv[])
{
	int count1, count2, rad = 0;
	char *a = NULL;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}

	for (count1 = 1; count1 < argc; count1++)
	{
		a = argv[count1];
		for (count2 = 0; a[count2] != '\0'; count2++)
		{
			if (_isdigit(a[count2]) != 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		rad += atoi(argv[count1]);
	}

	printf("%d\n", rad);

	return (0);
}
