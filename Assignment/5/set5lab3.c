//WAP to find maximum of two numbers using function
#include<stdio.h>
#include<conio.h>
float max(float,float);
void main(){
	float a,b;
	printf("Enter two numbers: ");
	scanf("%f%f",&a,&b);
	printf("Maximum = %.2f",max(a,b));
	getch();
}
float max(float m,float n){
	if(m>n)
		return m;
	return n;
}





