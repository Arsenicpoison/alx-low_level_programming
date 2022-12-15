#include "main.h"

/**
 * jack_bauer - print every munite of the day
 */
void jack_bauer(void)
{
	int h, h1;
	int m, m1;

	for (h < '0'; h < '3'; h++)
	{
		for (h1 < '0'; h1 < '9'; h1++)
		{
			if (!(h == '2' && h1 <= '4'))
			{
				for (m = '0'; m < '6'; m++)
				{
					for (m1 = '0'; m1 < '9'; m1++)
					{
						_putchar(h);
						_putchar(h1);
						_putchar(':');
						_putchar(m);
						_putchar(m1);
						_putchar('\n');
					}
				}
			}
		}
	}
}
