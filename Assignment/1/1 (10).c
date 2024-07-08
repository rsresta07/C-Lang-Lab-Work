//Write a C program to read number of days and convert it into years, months and days. 

#include <stdio.h>
#include <conio.h>
void main()
{
	int yr, mth, day, days;
	printf("Enter day: ");
	scanf("%d",&day);
	days=day;
	yr=day/(30*12);
	day=day%(30*12);
	mth=day/30;
	day=day%30;
	printf("The %d days is %d years, %d months, %d days", days, yr, mth, day);
	getch();
}
