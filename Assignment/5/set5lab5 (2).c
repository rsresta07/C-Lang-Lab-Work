	
#include<stdio.h>
#include<conio.h>
int fact(int);
void main(){
	int no;
	printf("Enter a number:");
	scanf("%d",&no);
	printf("Factorial = %d",fact(no));
	getch();
}
int fact (int no){
	int i,ans;
	for(i=1,ans=1;i<=no;i++)
    	ans=ans*i;
	return ans;
}
