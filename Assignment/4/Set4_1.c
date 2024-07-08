// program to initialize 10 number and display them
#include<stdio.h>
#include<conio.h>
void main(){
	int i, a[] = {1,3,5,8,22,10,29,33,54,28};
	printf("The elements of array are: \n");
	for(i=0;i<10;i++)
		printf("%4d",a[i]);
	getch();
}
