#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter the value: ");
	scanf("%d",&n);
	printf("Multiplication table upto %d:\n",n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
			printf("%4d",i*j);
		printf("\n");
	}
	getch();
}
