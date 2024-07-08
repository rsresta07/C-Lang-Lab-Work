/*reverse of number using function*/
#include<stdio.h>
#include<conio.h>
int reverse(int);
void main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	printf("Reverse = %d",reverse(num));
	getch();
}
int reverse(int n){
	int i=0,revs=0,rem=0;
	while(i<n){
		rem=n%10;
		revs=revs*10+rem;
		n=n/10;
	}
	return(revs);
}
