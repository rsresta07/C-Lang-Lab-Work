//WAP to find sales person commission on sales amount
//according to given conditions
#include<stdio.h>
#include<conio.h>
void main()
{
	float amt;
	printf("Enter Sales Amount: ");
	scanf("%f",&amt);
	if(amt<0)
	{
		printf("Amount should be a positive number.");
	}
	else if(amt<5000)
	{
		printf("Commission= %.2f",amt);
	}
	else if(amt<10000&&amt>=5000)
	{
		printf("Commission= %.2f",0.05*amt);
	}
	else if(amt<15000&&amt>=10000)
	{
		printf("Commission= %.2f",0.07*amt);
	}
	else
	{
		printf("Commission= %.2f",0.1*amt);
	}

	getch();
}
