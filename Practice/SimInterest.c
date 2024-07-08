/*WAP a to find simple interest*/

#include <stdio.h>
#include <conio.h>

void main()
{
	float p,t,r,i,a;
	printf("Enter the principle:");
	scanf("%f",&p);
	printf("Enter the Rate:");
	scanf("%f",&t);
	printf("Enter the Time:");
	scanf("%f",&r);
	
	i=(p*t*r)/100;
	a=p+i;
	
	printf("\nThe simple interest is %.2f", i);
	printf("\nThe amount is %.2f",a);
	getch();
}
