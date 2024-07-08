//WAP to compute b^p using library function. Your program should read value of b and p from user

#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
	float b, p, a;
	printf("Enter the number: ");
	scanf("%f", &b);
	printf("Enter the power: ");
	scanf("%f", &p);
	a=pow(b,p);
	printf("The answer is %.3f", a);
	getch();
}
