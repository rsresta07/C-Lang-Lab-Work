//WAP to check whether a number is armstrong or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
void arm(int);
void main()
{
	int num;
	printf("Enter a number to check whether a number is armstrong or not: ");
	scanf("%d",&num);
	arm(num);
	getch();
}
void arm(int n){
	int as=0,temp;
	temp=n;
	while(n!=0){
		as+=pow(n%10,3);
		n/=10;
	}
	if(as==temp)
		printf("The number is armstrong.");
	else
		printf("The number is not armstrong.");
}





