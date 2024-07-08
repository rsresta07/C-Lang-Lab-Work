#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i, cnt=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for (i=1;i=n;i++)
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
			break;
	}
	if(j==i)
	{
		printf("%6d",i);
		cnt++;
	}
}
