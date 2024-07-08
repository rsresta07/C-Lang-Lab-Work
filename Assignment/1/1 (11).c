//Write a program to reverse four digit numbers.

#include <stdio.h>
#include <conio.h>
void main()
{
	int num, n,o,t,h,th, rev;
	printf("Enter the four digit number: ");
	scanf("%d",&num);
	n=num;
	o=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	th=n%10;
	n=n/10;
	h=n%10;
	
	rev=o*1000+t*100+th*10+h;
	printf("The reverse of %d = %d", num,rev);
//	printf("The reverse of %d = %d%d%d%d", num,o,t,h,th);
	getch();
}
