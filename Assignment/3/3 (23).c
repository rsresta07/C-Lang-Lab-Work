#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter the value: ");
	scanf("%d",&n);
	printf("The multiplication of %d:",n);
	for(i=1;i<=10;i++)
		printf("\n%2d x %2d = %2d",n,i,i*n);
	getch();
}
