// Write a program to read three different numbers and find the smallest one.

#include <stdio.h>
#include <conio.h>
void main()
{
	int n1,n2,n3,n4;
	printf("Enter four different number: ");
	scanf("%d %d %d %d",&n1, &n2, &n3, &n4);
	
	if(n1<n2 && n1<n3 && n1<n4)
	{
		printf("%d is smallest.", n1);
	}
	else if(n2<n3 && n2<n4)
	{
		printf("%d is smallest.", n2);
	}
	else if (n3<n4)
	{
		printf("%d is smallest." ,n3);
	}
	else
	{
		printf("%d is smallest." ,n4);
	}
	getch();
}
