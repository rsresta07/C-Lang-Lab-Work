//WAP to find surface area of box using function
#include<stdio.h>
#include<conio.h>
float sa(float,float,float);
void main(){
	float l,b,h,Area;
	printf("Enter Length, Breadth and Height: ");
	scanf("%f%f%f",&l,&b,&h);
	Area=sa(l,b,h);
	printf("Surface area = %.2f",Area);
	getch();
}
float sa(float l,float b,float h){
	return (2*(l*h+l*b+b*h));
}





