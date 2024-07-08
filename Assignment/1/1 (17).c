// Write a program to read four different numbers and find the largest numbers.

#include <stdio.h>
#include <conio.h>
void main()
{
	int n1,n2,n3,n4;
	printf("Enter four different number:\n");
	scanf("%d %d %d %d",&n1, &n2, &n3, &n4);
	
	if(n1>n2 && n1>n3 && n1>n4)
	{
		printf("%d is largest.", n1);
	}
	else if(n2>n3 && n2>n4)
	{
		printf("%d is largest.", n2);
	}
	else if(n3>n4)
	{
		printf("%d is largest.", n3);
	}
	else
	{
		printf("%d is largest.", n4);
	}
	
	getch();
}
