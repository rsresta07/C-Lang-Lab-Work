/*area of rectangle using function*/
#include<stdio.h>
#include<conio.h>
int rect(int,int);
void main(){
	int l,b;
	printf("Enter Length: ");
	scanf("%d",&l);
	printf("Enter Breadth: ");
	scanf("%d",&b);
	printf("Area of rectanglar point is %d",rect(l,b));
	getch();
}
int rect(int a, int b){
	int res;
	res=a*b;
	return(res);
}
