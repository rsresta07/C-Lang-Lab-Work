/*prime or not using function*/
#include<stdio.h>
#include<conio.h>
int isprime(int);
void main(){
	int n;
	isprime(n);
	getch();
}
int isprime(int n){
	int i,c=0;
	printf("Enter positive number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(n%i==0)
			c++;
	if(c==2)
		printf("%d is prime number.",n);
	else
		printf("%d is not prime number.",n);
}
