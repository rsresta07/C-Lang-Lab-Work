//Program to read four numbers and find the smallest
#include<stdio.h>
#include<conio.h>
void main() {
	int a,b,c,d;
	printf("Enter four numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a<=b&&a<=c&&a<=d)
		printf("%d is the smallest.",a);
	else if(b<=a&&b<=c&&b<=d)
		printf("%d is the smallest.",b);
	else if(c<=a&&c<=b&&c<=d)
		printf("%d is the smallest.",c);
	else if(d<=a&&d<=b&&d<=c)
		printf("%d is the smallest.",d);
	else printf("Invalid!!");
	
		
		
		
	getch();
}