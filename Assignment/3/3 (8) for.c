/*generate Sum of squares of first n natural numbers*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter 'n' number: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
		sum+=(i*i);
	printf("The sum of square is %d.",sum);
	getch();
}
