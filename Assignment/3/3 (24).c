
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(s=4;s>=i-1;s--)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	getch();
}
