#include <stdio.h>
#include <conio.h>
void main()
{
	int j,i,n;
	printf("Enter the value: ");
	scanf("%d",&n);
	printf("\nMultiplication table from 1 to 10 upto %d: \n",n);
	for(i=1;i<=n;i++)
	{
    	for(j=1;j<=10;j++)
    	{
    		if (j<=10-1)
				printf("%4d ",i*j);
        	else
	    		printf("%4d",i*j);
		}
		printf("\n");
	}
	getch();
} 
