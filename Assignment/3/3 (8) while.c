/*generate Sum of squares of first n natural numbers*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter 'n' number: ");
	scanf("%d",&n);
	i=0;
	while (i<=n)
	{
		sum+=(i*i);
		i++;
	}
	printf("The sum of square is %d.",sum);
	getch();
}
