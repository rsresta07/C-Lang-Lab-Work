#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("All the prime numbers from 1 to %d are:\n",n);
	for(i=2;i<=n;i++)
	{
		for (j=2;j<=i;j++)
		{
			if (i%j == 0)
        		break;
		}
		if(i==j)
			printf("%6d",j);
	}	
	getch();
}
