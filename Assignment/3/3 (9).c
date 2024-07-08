#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,k,n,sum1=0,sum2=0,sum3=0;
	printf("Enter 'n' number: ");
	scanf("%d",&n);
	
	for (i=0;i<=n;i++)
		sum1+=(i*i);
	
	j=0;	
	do{
		sum2+=(j*j);
		j++;
	}while(j<=n);
	
	k=0;
	while (k<=n)
	{
		sum3+=(k*k);
		k++;
	}
	printf("The sum of square with for loop is %d.\n",sum1);
	printf("The sum of square with do while loop is %d.\n",sum2);
	printf("The sum of square with while loop is %d.\n",sum3);
	getch();
}
