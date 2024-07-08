//WAP to find surface area of box. [S=2(lb+lh+bh)]

#include <stdio.h>
#include <conio.h>
void main()
{
	float l, b , h, s;
	printf("Enter a Length: ");
	scanf("%f", &l);
	printf("Enter a Breadth: ");
	scanf("%f", &b);
	printf("Enter a Height: ");
	scanf("%f", &h);
	s=2*(l*b+l*h+b*h);
	printf("The surface area of the box is %.2f", s);
	getch();
}
