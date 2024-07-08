//WAP to read temperature in centigrade and convert it into Fahrenheit

#include <stdio.h>
#include <conio.h>
void main()
{
	float c, f;
	printf("Enter the temperature(C): ");
	scanf("%f", &c);
	f=(9*c/5)+32;
	printf("The temperature in Fahrenheit is %.2f", f);
	getch();
}
