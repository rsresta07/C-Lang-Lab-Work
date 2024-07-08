/*power using function*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float powe(float,float);
void main(){
	float b,p;
	printf("Enter base and power: ");
	scanf("%f %f",&b,&p);
	printf("%.3f ^ %.3f = %.3f",b,p,powe(b,p));
	getch();
}
float powe(float b,float p){
	float res;
	res=pow(b,p);
	return(res);
}
