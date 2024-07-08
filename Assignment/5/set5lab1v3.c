// returning no value and passing arguement
#include<stdio.h>
#include<conio.h>
int inter(int, int, int);
void main(){
	int p,t,r;
	printf("Enter principle, time(Y), Rate: ");
	scanf("%d %d %d",&p,&t,&r);
	inter(p,t,r);
	getch();
}
int inter(int p, int t, int r){
	int res;
	res=(p*t*r)/100;
	printf("Simple Interest = %d",res);
}
