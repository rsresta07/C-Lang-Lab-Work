//Program to find roots of
//quadratic equation

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float d,a,b,c,x1,x2;
	printf("Enter a, b and c from quadratic equation: ");
	scanf("%f%f%f",&a,&b,&c);
	d= b*b-4*a*c;
	if(a==0)
		printf("Entered coefficients doesnot make a quadratic equation.");
	else if(d<0)
		printf("Imaginery roots");
		
	else
		{
			x1= (-b+sqrt(d))/(2*a);
			x2= (-b-sqrt(d))/(2*a);
			printf("%.2f, %.2f",x1,x2);	
		}
		
	getch();
}