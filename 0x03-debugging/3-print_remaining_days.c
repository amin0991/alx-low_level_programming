#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int i;
	int month_days;
	int max_day;
	int day_of_year;
	int remaining_days;

	if (month < 1 || month > 12) {
		printf("Invalid month: %d\n", month);
		return;
	}
	max_day = 31;
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		max_day = 30;
	} else if (month == 2) {
		max_day = 28;
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			max_day = 29;
		}
	}
	if (day < 1 || day > max_day) {
		printf("Invalid day: %d\n", day);
		return;
	}
	if (year < 1) {
		printf("Invalid year: %d\n", year);
		return;
	}
	day_of_year = day;
	if (month > 1) {
		for (i = 1; i < month; i++) {
			month_days = 31;
			if (i == 4 || i == 6 || i == 9 || i == 11) {
				month_days = 30;
			} else if (i == 2) {
				month_days = 28;
				if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
					month_days = 29;
				}
			}
			day_of_year += month_days;
		}
	}
	remaining_days = 365;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		remaining_days = 366;
	}
	remaining_days -= day_of_year;
	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", remaining_days);
}
