#include <stdio.h>

/**
 * main - print comb 5
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a  <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = a; c <= '9'; c++)
			{
				if (c == a)
				{
					d = b + 1;
				}
				else
				{
					d = '0';
				}
				for (d = d; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!(a == '9' && b == '8' && c == '9' && d == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
