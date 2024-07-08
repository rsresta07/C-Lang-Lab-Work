/*reverse of number using function*/
#include<stdio.h>
#include<conio.h>
int reve(int);
void main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("Reverse = %d",reve(n));
	getch();
}
int reve(int n){
	int rev=0;
	while(n!=0){
		rev=rev*10+n%10;
		n=n/10;
	}
	return(rev);
}
