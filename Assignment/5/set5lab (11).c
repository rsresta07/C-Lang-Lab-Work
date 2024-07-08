//WAP that uses function isprime() for testing whether a number is prime or not
#include<stdio.h>
#include<conio.h>
int isprime(int);
void main(){
	int n;
	printf("Enter a number to check whether it is prime or not: ");
	scanf("%d",&n);
	if(isprime(n))
		printf("%d is a prime number.",n);
	else
		printf("%d is not a prime number.",n);
	getch();
}
int isprime(int n){
	int i,p=0;
	for(i=2;i<=n;i++)
		if(n%i==0)
			p++;
	if(p==1||n==1)
		return 1;
	else
		return 0;
}





