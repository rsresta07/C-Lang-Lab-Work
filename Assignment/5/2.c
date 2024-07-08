/*surface area of box using function*/
#include<stdio.h>
#include<conio.h>
int rect(int,int,int);
void main(){
	int l,b,h;
	printf("Enter Length: ");
	scanf("%d",&l);
	printf("Enter Breadth: ");
	scanf("%d",&b);
	printf("Enter Height: ");
	scanf("%d",&h);
	printf("Surface Area of box: %d",rect(l,b,h));
	getch();
}
int rect(int a, int b, int c){
	int res;
	res=2*(a*b+a*c+b*c);
	return(res);
}
