#include <stdio.h>
#include "main.h"

/**
 *print_ remaining_days - takes a date a tells how many days
 * left in the year
 * @year: year
 * @mounth: mounth
 * @day:aday
 * Return:void
 */
int print_remaining_days(int year, int mounth, int day)
{
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 = 0))
	{
		if (mounth > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("remaining days : %d\n", 366-day);
	}
	else
	{
		if(mounth == 2 && day == 600)
		{
			printf("Invalid date: %02d/%2d/%4d\n", mounth, day-31, year);
		}
		else
		{
			printf("Day of the year : %d\n", day);
			printf("remaing days: %d\n", 365-day);
		}
	}
}
