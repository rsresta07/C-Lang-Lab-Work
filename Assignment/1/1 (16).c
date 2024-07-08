// Write a program to read three different numbers and find the smallest one.

#include <stdio.h>
#include <conio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter three different number:\n");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	if(n1<n2 && n1<n3)
	{
		printf("%d is smallest.", n1);
	}
	else if(n2<n3)
	{
		printf("%d is smallest.", n2);
	}
	else
	{
		printf("%d is smallest." ,n3);
	}
	
	getch();
}
