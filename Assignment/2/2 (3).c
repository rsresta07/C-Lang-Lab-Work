/*wap to read a number is to check whether it is odd or even*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("The number '%d' is even.",num);
	}
	else
	{
		printf("The number '%d' is odd.",num);
	}
	getch();
}
