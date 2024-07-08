/*gcd using function*/
#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main(){
	int a,b;
	printf("Enter number: ");
	scanf("%d%d",&a,&b);
	printf("HCF = %d",gcd(a,b));
	getch();
}
int gcd(int a,int b){
	int r;
	while(b!=0){ /*there in loop->r=a%b->b=r->b=a%b so... b!=0*/
		r=a%b;
		a=b;
		b=r;
	}
	return(a);
}
