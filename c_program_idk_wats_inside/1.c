//Program to read three numbers and find the convert 
//uppercase to lowercase

#include<stdio.h>
#include<conio.h>
void main() {
	char c;
	printf("Enter a lowercase character: ");
	scanf("%c",&c);
	printf("\n_______________________\n");
	if(c>='a'&&c<='z')
		{
			c=c-32;
			printf("\n%c",c);
		}
	else 
		printf("%c",c);
	
	
	
	getch();
}