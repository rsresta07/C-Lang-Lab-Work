//program to fnd first sum of 100 natural num

#include <stdio.h>
#include <conio.h>
void main()
{
	int i, sum=0;
	i=1;
	do
	{
		sum+=i;
		i++;
	}while(i<=100);
	printf("The sum of 1st 100 natural number are: %d",sum);
	getch();
}
