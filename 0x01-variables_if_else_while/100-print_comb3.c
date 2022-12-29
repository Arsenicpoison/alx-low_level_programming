#include <stdio.h>

/**
 * main - print comb3
 *
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
	{
		m = 49 + (n - 48);
		for (; m < 58; m++)
		{
			putchar(n);
			putchar(m);
			if (n == 56 && m == 58)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
