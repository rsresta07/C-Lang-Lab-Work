//WAP to find roots of quadratic equation using function. Use function findroots()
//which receive three coefficients of equation and display the roots
#include<stdio.h>
#include<conio.h>
float findroots(int,int,int);
void main(){
	int a,b,c;
	float root;
	printf("Enter coeff a, b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	findroots(a,b,c);
	getch();
}
float findroots(int a,int b,int c){
	float d,x1,x2;
	d= b*b-4*a*c;
	if(a==0)
		printf("This doesnot make quadratic equation.");
	else if(d<0)
		printf("Imaginery roots");
	else{
		x1= (-b+sqrt(d))/(2*a);
		x2= (-b-sqrt(d))/(2*a);
		printf("Roots are %.2f and %.2f",x1,x2);	
	}
}
