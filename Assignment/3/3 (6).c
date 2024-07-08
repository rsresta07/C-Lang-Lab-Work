/*generate first n even terms and find their sum*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter 'n' number: ");
	scanf("%d",&n);
	for (i=0;i<=n;i=i+2)
	{
		printf("%4d",i);
		sum+=i;
	}
	printf("\nThe sum is %d",sum);
	getch();
}
