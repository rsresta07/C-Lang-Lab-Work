/*gcd using recursive function*/
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
	if (b==0)
		return(a);
	else
		return(gcd(b,a%b));
}
