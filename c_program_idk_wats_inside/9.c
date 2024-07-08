//Program to check leap or not
#include<stdio.h>
#include<conio.h>
void main(){
	int yr;
	printf("Enter a year: ");
	scanf("%d",&yr);
	if(yr%400==0)
	{
		printf("%d is leap year.",yr);
	}
	else if(yr%100==0)
	{
		printf("%d is not leap year.",yr);
	}
	else if(yr%4==0)
	{
		printf("%d is leap year.",yr);
	}
	else
			printf("%d is not leap year.",yr);
	getch();
}