#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for (i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	
	if(i==n)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
	getch();
}
