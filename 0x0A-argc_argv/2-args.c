#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments it gets.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on succes.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
