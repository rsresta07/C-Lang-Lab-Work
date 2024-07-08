//to find three digit number
#include<stdio.h>
#include <conio.h>

void main()
{
	int num;
	printf("Enter a three digit number:");
	scanf("%d",&num);
	
	if(num>=100 && num<=999)
	{
		printf("%d is three digit number",num);
	}
	else
	{
		printf("%d is not three digit number",num);
	}
	getch();
}
