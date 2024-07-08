// find the sum of 3 digit number

#include<stdio.h>
#include <conio.h>
void main()
{
	int n, o, t, h, cn, s;
	printf("Enter the three digits number: ");
	scanf("%d",&n);
	cn=n;
	o=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	h=n%10;
	s=o+t+h;
	printf("Sum of digits of %d= %d", cn,s);
	getch();
}
