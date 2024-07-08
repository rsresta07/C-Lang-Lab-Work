// returning value and passing no arguement
#include<stdio.h>
#include<conio.h>
int inter(int, int, int);
void main(){
	int p,t,r;
	printf("Simple Interest = %d",inter(p,t,r));
	getch();
}
int inter(int p, int t, int r){
	printf("Enter principle, time(Y), Rate: ");
	scanf("%d %d %d",&p,&t,&r);
	return ((p*t*r)/100);
}
