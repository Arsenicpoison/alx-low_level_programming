#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * _strlen - return length of a string
 * @s: string to be measured
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;

	return (count);
}

/**
 * _isdigit - checks for a digit 0-9
 * @c: char to be checked
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints Error, followed by a new line, to standard error
 *
 * Return: void
 */
void print_error(void)
{
	int count = 0;
	char *error = "Error\n";

	while (*(error + count))
	{
		_putchar(*(error + count));
		count++;
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0 if successful, 98 if an error occurs
 */
int main(int argc, char **argv)
{
	int a, b, len1, len2, len_res, number1, number2, res_num;
	int *result;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}
	for (a = 1; a < argc; a++)
		for (b = 0; *(*(argv + a) + b); b++)
			if (!_isdigit(*(*(argv + a) + b)))
			{
				print_error();
				exit(98);
			}
	len1 = _strlen(*(argv + 1)), len2 = _strlen(*(argv + 2));
	len_res = len1 + len2;
	result = calloc(len_res, sizeof(int));
	if (!result)
		return (1);
	for (a = len1 - 1; a >= 0; a--)
	{
		number1 = *(*(argv + 1) + a) - '0';
		res_num = 0;
		for (b = len2 - 1; b >= 0; b--)
		{
			number2 = *(*(argv + 2) + b) - '0';
			res_num = *(result + a + b + 1) + (number1 * number2);
			*(result + a + b + 1) = res_num % 10;
			*(result + a + b) += res_num / 10;
		}
	}
	for (a = 0; a < len_res - 1 && !*(result + a); a++)
		;
	for (; a < len_res; a++)
		_putchar(*(result + a) + '0');
	_putchar('\n');
	free(result);
	return (0);
}
