#include <stdio.h>
#include <conio.h>
void main()
{
	int m,f;
	float r;
	printf("The number of male students: ");
	scanf("%d",&m);
	printf("The number of female students: ");
	scanf("%d",&f);
	r=(float)m/f;
	printf("\nThe ratio is %.3f:1.",r);
	getch();
}

