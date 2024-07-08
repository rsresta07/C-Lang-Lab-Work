//WAP to find the HCF of two numbers using function
#include<stdio.h>
#include<conio.h>
int hcf(int,int);
void main(){
	int a,b,gcd;
	printf("Enter two numbers to find the HCF: ");
	scanf("%d%d",&a,&b);
	gcd=hcf(a,b);
	printf("The HCF of %d and %d is %d.",a,b,gcd);
	getch();
}
int hcf(int a,int b){
	int grt,sml,gcd,rem;
	grt=a;
	sml=b;	
	while(grt%sml!=0){
		rem=grt%sml;
		grt=sml;
		sml=rem;
	}
	return sml;
}
