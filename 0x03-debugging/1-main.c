#include <stdio:h>

/**
 * main - will cause an infite loop
 * @a: integer to test
 * Return: always (0)
 */
int main(void)
{
	int a;

	printf("infinite loop is incoming:(\n");
	a=0;
	/**while(a < 10)
	{
		putchar(a);
	}*/
	printf("infinite loop avoided \\o/\n");
	return (0);
}
