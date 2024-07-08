/*Write a program in C to find the maximum number between two numbers using a pointer.*/
#include<stdio.h>
#include<conio.h>
void main(){
	int fno,sno,*ptr1=&fno,*ptr2=&sno;
	printf("Enter any two numbers: ");
	scanf("%d %d", ptr1,ptr2);
	if(*ptr1>*ptr2)
		printf("%d is maximum number.",*ptr1);
	else
		printf("%d is maximum number.",*ptr2);
	getch();
}
