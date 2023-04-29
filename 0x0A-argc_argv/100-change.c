#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change - counts the minimum number of coins to make change for
 * an amount of money.
 * @number: Amount.
 * @mod: Array of coins.
 * @size: Size of array.
 * Return: The minimum number of coins.
 */

int change(int number, int *mod, int size)
{
	if (number < *mod)
		return (0);
	return ((number / *(mod + size - 1)) +
	       change((number % *(mod + size - 1)), mod, size - 1));
}

/**
 * main - prints a change for an amount of money.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 is succes.
 */
int main(int argc, char *argv[])
{
	int number, size, amount;
	int coins[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		number = atoi(argv[1]);
		size = 5;
		if (number <= 0)
			printf("0\n");
		else
		{
			amount = change(number, &coins[0], size);
			printf("%d\n", amount);
		}
	}

	return (0);
}
