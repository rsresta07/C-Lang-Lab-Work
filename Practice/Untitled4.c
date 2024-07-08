
#include<stdio.h>
#include<conio.h>

void main()
{
	char fname[20], lname[20];
	printf("Enter name: ");
	scanf("%s%s", fname, lname);
	printf("%s %s", fname, lname);
	getch();
}
