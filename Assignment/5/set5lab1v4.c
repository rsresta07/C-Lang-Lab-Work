// returning no value and passing no arguement
#include<stdio.h>
#include<conio.h>
int inter();
void main(){
	inter();
	getch();
}
int inter(){
	int p,t,r, res;
	printf("Enter principle, time(Y), Rate: ");
	scanf("%d %d %d",&p,&t,&r);
	res=(p*t*r)/100;
	printf("Simple Interest = %d",res);
}
