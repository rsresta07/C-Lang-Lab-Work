//program to fnd first sum of n natural num

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n, sum=0;
	i=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	do{
		sum+=i;
		i++;
	}while(i<=n);
	printf("The sum of 1st %d natural number is %d",n,sum);
	getch();
}
