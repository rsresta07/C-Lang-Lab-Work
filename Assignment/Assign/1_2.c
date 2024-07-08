/*gcd using function*/
#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main(){
	int a,b;
	printf("Enter number: ");
	scanf("%d%d",&a,&b);
	printf("GCD = %d",gcd(a,b));
	getch();
}
int gcd(int a,int b){
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return(a);
}
