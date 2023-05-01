#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its own opcodes
 * @argv: number of bytes to print
 * @argc: number of arguments
 * Return: 0 (success), 1 if failure
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int len;
	unsigned char *fp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	len = atoi(argv[1]);
	if (len < 0)
	{
		printf("Error\n");
		exit(2);
	}
	fp = (unsigned char *)main;
	if (len > 0)
	{
		while (count < len - 1)
			printf("%02hhx ", fp[count++]);
		printf("%hhx\n", fp[count]);
	}
	return (0);

}
