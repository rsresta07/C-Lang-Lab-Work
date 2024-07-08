/*display even number by using for loop and continue*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%2==1)
			continue;
		printf("%6d",i);
	}
	getch();
}
