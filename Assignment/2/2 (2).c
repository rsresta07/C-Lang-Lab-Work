/*wap to read a number is to check whetere it is positive or negative
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("The number '%d' is positive.",num);
	}
	else if (num<0)
	{
		printf("The number '%d' is negative.",num);
	}
	else
	{
		printf("The number '%d' is neither positive nor negative.",num);
	}
	getch();
}
