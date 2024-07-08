/*mutiply using recursive function*/
#include<stdio.h>
#include<conio.h>
float multi(float,float);
void main(){
	float n1,n2;
	printf("Enter number: ");
	scanf("%f",&n1);
	printf("Enter second number: ");
	scanf("%f",&n2);
	printf("%.2f * %.2f = %.2f",n1,n2,multi(n1,n2));
	getch();
}
float multi(float a,float b){
	if (a==0 || b==0)
		return(0.00);
	else
		return(a*b);
}
