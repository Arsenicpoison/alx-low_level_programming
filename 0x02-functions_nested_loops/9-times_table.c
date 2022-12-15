#include "main.h"

/**
 * times_table - print 9times table
 */
void times_table(void)
{
	int n1, n2, m;

	for (n1 = '0'; n1 < '10'; n1++)
	{
		for (n2 = '0'; n2 < '10'; n2++)
		{
			m = n1 * n2;
			if (m > 10)
			{
				if (n2 > 0)
					_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
			if (n2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
