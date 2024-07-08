/*wap to read cost price and selling price of good and find profit or loss amount
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float cp, sp, loss, prof;
	printf("Enter the cost price: ");
	scanf("%f",&cp);
	printf("Enter the selling price: ");
	scanf("%f",&sp);
	
	if(cp>sp)
	{
		loss=cp-sp;
		printf("The loss amount is %.2f",loss);
	}
	else if(sp>cp)
	{
		prof=sp-cp;
		printf("The profit amount is %.2f",prof);
	}
	else
		printf("Niether profit nor loss.");
	getch();
}
