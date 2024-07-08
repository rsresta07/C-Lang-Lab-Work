//Write a program to convert Distance in meter into kilometer and meter

#include <stdio.h>
#include <conio.h>
void main()
{
	int km, m, metre;
	printf("Enter metre: ");
	scanf("%d",&m);
	metre=m;
	km=m/1000;
	m=m%1000;
	printf("The %d meters is %d kilometre, %d metre", metre, km, m);
	getch();
}
