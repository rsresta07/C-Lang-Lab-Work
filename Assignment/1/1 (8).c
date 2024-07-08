//area and circumference of circle using symbolic constants

#include <stdio.h>
#include <conio.h>
#define PI 3.142857
void main()
{
	float r, a, c;
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	a=PI*r*r;
	c=2*PI*r;
	printf("\nThe area of the circle is %.2f",a);
	printf("\nThe circumference of the circle is %.2f",c);
	getch();
}
