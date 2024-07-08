/*power using recursive function*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float powe(float,float);
void main(){
	float b,p;
	printf("Enter number: ");
	scanf("%f",&b);
	printf("Enter power: ");
	scanf("%f",&p);
	printf("%.3f ^ %.3f = %.3f",b,p,powe(b,p));
	getch();
}
float powe(float b,float p){
	if (p==0)
		return(1.0);
	else if (p>0)
		return(b*pow(b,p-1));
	else
		return(pow(b,p+1)/b);
}
