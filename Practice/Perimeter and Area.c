/*WAP to find Perimeter and Area*/

#include <stdio.h>

void main()
{
	float l, b , a, p;
	printf("Enter a Length:");
	scanf("%f", &l);
	printf("Enter a Breadth:");
	scanf("%f", &b);

	p=2*(l+b);
	a=l*b;
	printf("\nThe perimeter is %f", p);
	printf("\nThe area is %f", a);

	getch();
}
