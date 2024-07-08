//program to display first n natural number using for loop

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
	getch();
}
