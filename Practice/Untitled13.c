//program to fnd first sum of 100 natural num

#include <stdio.h>
#include <conio.h>
void main()
{
	int i, sum=0;
	for (i=1;i<=100;i++)
	{
		sum+=i;
	}
	printf("sum is %d",sum);
	getch();
}
