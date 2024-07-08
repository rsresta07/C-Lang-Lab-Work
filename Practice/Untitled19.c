//program to fnd first sum of n natural num

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n, sum=0;
	printf("Enter the natural number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum is %d",sum);
	getch();
}
