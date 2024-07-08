//to find marks

#include<stdio.h>
#include <conio.h>

void main()
{
	float marks;
	printf("Enter the marks:");
	scanf("%f",&marks);
	
	if(marks>=90)
	{
		printf("%.2f is A+",marks);
	}
	else if(marks>=80)
	{
		printf("%.2f is A",marks);
	}
	else if(marks>=70)
	{
		printf("%.2f is B+",marks);
	}
	else if(marks>=60)
	{
		printf("%.2f is B",marks);
	}
	else if(marks>=50)
	{
		printf("%.2f is C+",marks);
	}
	else
	{
		printf("Failed",marks);
	}
	getch();
}
