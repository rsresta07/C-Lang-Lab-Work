/*Write a program to read number of male and female student in a class and finally find 
ratio of female and male student. Use variable of appropriate data types*/

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
	
	if(m>f)
	{
		r=(float)m/f;
		printf("\nThe ratio is %.2f:1.",r);
	}
	else if(f>m)
	{
		r=(float)f/m;
		printf("\nThe ratio is 1:%.2f.",r);
	}
	else
	{
		printf("\nThe ratio is 1:1.");
	}
	getch();
}
