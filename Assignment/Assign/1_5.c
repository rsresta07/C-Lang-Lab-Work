/*prime or not using function*/
#include<stdio.h>
#include<conio.h>
int prime(int);
void main(){
	int n;
	prime(n);
	getch();
}
int prime(int num){
	int i,c=0;
	printf("Enter positive number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		if(num%i==0)
			c++;
	if(c==2)
		printf("%d is prime number.",num);
	else
		printf("%d is not prime number.",num);
}
