/* Program to initialize 10 numbers in arry and display them.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10];
	printf("enter 10 number :");
	for (i=1;i<=10;i++)
	{
		scanf("%d",a[i]);
		
	}
	printf("U entered the number are :");
	for(i=1;i<=10;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
	getch();

}
