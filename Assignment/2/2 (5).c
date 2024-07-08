/*Write a program to read 3 numbers and find the largest numbers.*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter three different number:\n");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("%d is largest.", n1);
	}
	else if(n2>n3)
	{
		printf("%d is largest.", n2);
	}
	else
	{
		printf("%d is largest.", n3);
	}
	
	getch();
}
