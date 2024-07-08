//calculator

#include <stdio.h>
#include <conio.h>

void main()
{
	float n1, n2, a;
	char o;
	printf("Enter a number:");
	scanf("%f", &n1);
	printf("\nEnter an operator:");
	scanf("%s", &o);
	printf("\nEnter a second number:");
	scanf("%f",&n2);
	
	if(o=='+')
	{
		a=n1+n2;
		printf("\nThe answer is %f", a);
	}
	else if (o=='-')
	{
		a=n1-n2;
		printf("\nThe answer is %f", a);
	}
	else if (o=='*')
	{
		a=n1*n2;
		printf("\nThe answer is %f", a);
	}
	else if (o=='/')
	{
		a=n1/n2;
		printf("\nThe answer is %f", a);
	}
	else if (o=='%')
	{
		a=(int)n1%(int)n2;
		printf("\nThe answer is %.0f", a);
	}
	else
	{
		printf("\nInvalid number or operator");
	}

	getch();
}
