//Program to read a character
//and find whether it is letter, digit or other character
#include<stdio.h>
#include<conio.h>
void main() {
	char c;
	printf(" ");
	scanf("%c",&c);
	if(c>=97&&c<=122||c>=65&&c<=90)
		printf("%c is Character",c);
	else if(c>=48&&c<=57)
		printf("%c is Digit",c);
	else 
		printf("%c is Special character",c);
	getch();
}