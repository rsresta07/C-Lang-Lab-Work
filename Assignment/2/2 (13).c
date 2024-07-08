/*wap to find sales person commission on sales amount*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float amt,com;
	printf("Enter the sales amount: NRs ");
	scanf("%f",&amt);
	
	if (amt<5000)
		printf("Commission: NRs 0.00");
	else if (amt<10000)
	{
		com=amt*5/100;
		printf("Commission: NRs %.2f",com);
	}
	else if (amt<15000)
	{
		com=amt*7/100;
		printf("Commission: NRs %.2f",com);
	}
	else
	{
		com=amt*10/100;
		printf("Commission: NRs %.2f",com);
	}
	getch();
}
