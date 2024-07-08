//WAP to reverse a number using function
#include<stdio.h>
#include<conio.h>
int rev(int);
void main(){
	int n,reverse;
	printf("Enter a number to reverse: ");
	scanf("%d",&n);
	reverse=rev(n);
	printf("The reverse of %d is %d.",n,reverse);
	getch();
}
int rev(int n1){
	int n2=0,temp;
	while(n1!=0){
		n2=n2*10+n1%10; /*123 3->30->32->321*/
		n1/=10;
	}
	return n2;
}





