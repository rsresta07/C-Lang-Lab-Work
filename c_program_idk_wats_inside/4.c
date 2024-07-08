//Program to check Profit or Loss
#include<stdio.h>
#include<conio.h>
void main() {
	float cp,sp,res;
	printf("Cost Price: ");
	scanf("%f",&cp);
	printf("Selling Price: ");
	scanf("%f",&sp);
	if(cp>sp) {
		res = cp-sp;
		printf("Loss is %.2f.",res);
	} 
	else if(sp>cp) {
		res = sp-cp;
		printf("Profit is %.2f.",res);
	} 
	else if(sp=cp) {
		printf("Neither profit nor loss");
	}
	else
		printf("Invalid value!!");


	getch();
}