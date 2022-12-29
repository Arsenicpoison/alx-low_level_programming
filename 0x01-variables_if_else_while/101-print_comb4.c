#include <stdio.h>

/**
 * main - print comb 4
 *
 * Return: 0
 */
int main(void)
{
	int n, m, t;

	for (n = '0'; n <= '9'; n++)
	{
		m = n + 1;
		for (; m <= '9'; m++)
		{
			t = m + 1;
			for (; t <= '9'; t++)
			{
				putchar(n);
				putchar(m);
				putchar(t);
				if (n == '7' && m == '8' && t == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
