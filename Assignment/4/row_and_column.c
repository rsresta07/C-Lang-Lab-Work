#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,sum,b,d;
	printf("Enter the number of rows :");
	scanf("%d",&b);
	printf("Enter the number of coloumn: ");
	scanf("%d",&d);
	printf("Enter the elements of matrix : ");
	for(i=0;i<b;i++)
		for(j=0;j<d;j++)
			scanf("%d",&a[i][j]);
	fflush(stdin);
	sum=0;
	for(i=0;i<b;i++)
		for(j=0;j<d;j++)
		{
			sum=sum+a[i][j];
			printf("Sum of the row %d = %d\n",i+1,sum);
		}
	sum=0;
	for(i=0;i<d;i++)
		for(j=0;j<b;j++)
		{
			sum=sum+a[i][j];
			printf("sum of the coloumn %d =%d\n",i+1,sum);
		}
	getch();
}
