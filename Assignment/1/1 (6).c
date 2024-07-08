//WAP to read temperature in Fahrenheit and convert it into centigrade

#include <stdio.h>
#include <conio.h>
void main()
{
	float f, c;
	printf("Enter the temperature(F): ");
	scanf("%f", &f);
	c=5*(f-32)/9;
	printf("The temperature in centigrade is %.2f", c);
	getch();
}
