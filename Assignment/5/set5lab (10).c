//WAP to calculate base raised to power by using function
#include<stdio.h>
#include<conio.h>
int pwr(int,int);
void main(){
	int power,b,p;
	printf("Enter base and power: ");
	scanf("%d%d",&b,&p);
	printf("%d raised to the power of %d is %d.",b,p,pwr(b,p));
	getch();
}
int pwr(int b,int p){
	int s=1;
	while(p!=0){
		s=s*b;
		p--;
	}
	return s;
}





