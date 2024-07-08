/*generate Sum of cube of first 10 natural numbers*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,sum=0;
	for (i=0;i<=10;i++)
		sum+=(i*i*i);
	printf("Sum of cube of 1st 10 natural number: %d",sum);
	getch();
}
