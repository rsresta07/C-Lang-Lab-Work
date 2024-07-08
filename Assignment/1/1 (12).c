//Write a program to demonstrate the use of arithmetic operation on integers. (find sum, difference, product, quotient, and remainder).

#include <stdio.h>
#include <conio.h>

void main()
{
	int n1, n2, sub, add, div, pro, rem;
	printf("Enter a number:");
	scanf("%d", &n1);
	printf("Enter a second number:");
	scanf("%d",&n2);
	
	add=n1+n2;
	sub=n1-n2;
	div=n1/n2;
	pro=n1*n2;
	rem=n1%n2;
	
	printf("%d + %d = %d",n1, n2, add);
	printf("\n%d - %d = %d",n1, n2, sub);
	printf("\n%d * %d = %d",n1, n2, pro);
	printf("\n%d / %d = %d",n1, n2, div);
	printf("\n%d \%% %d = %d",n1, n2, rem);
	getch();
}
