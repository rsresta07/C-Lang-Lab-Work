// program to convert lowercase to uppercase character.

#include<stdio.h>
#include<conio.h>

void main()
{
	char lc, uc;
	printf("Enter a lowercase letter: ");
	scanf("%c",&lc);
	uc=lc-32;
	printf("The Uppercase of %c is %c", lc, uc);
	getch();
}
