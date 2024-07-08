//10. Program to read n numbers in an array then increment the elments by constant c where c is entered by users
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,num[100],c;
	printf("How many numbers? ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("Enter constant number: ");
	scanf("%d",&c);
	printf("The number after increment with %d:\n",c);
	for(i=0;i<n;i++)
		printf("%d\t",num[i]+c);
	getch();
}
