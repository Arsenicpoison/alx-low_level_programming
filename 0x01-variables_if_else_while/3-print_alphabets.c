#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Return: (0)
 */
int main(void)
{
	chr leter_a, leter_z;

	leter_a = 'a';
	leter_z = 'z';

	while (leter_a <= leter_z)
	{
		putchar(leter_a);
		leter_a++;
		if (leter_a == 123)
		{
			leter_a = 'A';
			leter_z = 'Z';
		}
	}
	putchar(10);
	return (0);
}
