/*Write a program in C to find the factorial of a given number using pointers.*/
#include<stdio.h>
#include<conio.h>
void fact(int,int*);
void main(){
    int fac,num1;
	printf("Enter a number: ");
	scanf("%d",&num1);		 
    fact(num1,&fac);
    printf("Factorial of %d: %d",num1,fac);
    getch();
}
void fact(int n,int *f){
    int i;
	*f =1;
    for(i=1;i<=n;i++)
       *f=*f*i;
}
