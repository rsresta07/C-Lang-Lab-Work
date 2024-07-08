//Program to read three numbers and find the median
#include<stdio.h>
#include<conio.h>
void main() {
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>c&&a<b||a<c&&a>b)
		printf("%d is the median.",a);
	else if(b>c&&b<a||b<c&&b>a)
		printf("%d is the median.",b);
	else if(c>a&&c<b||c<a&&c>b)
		printf("%d is the median.",c);
	else printf("Unknown");

	getch();
}