/*WACP to find Perimeter and Area of Rectangle*/

#include <stdio.h>
#include <conio.h>
void main()
{
	float l, b , a, p;
	printf("Enter a Length: ");
	scanf("%f", &l);
	printf("Enter a Breadth: ");
	scanf("%f", &b);
	a=l*b;
	p=2*(l+b);
	printf("\nThe area is %.2f", a);
	printf("\nThe perimeter is %.2f", p);
	getch();
}
