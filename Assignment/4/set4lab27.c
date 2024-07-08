//27. Program to remove all spaces from a line of text
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char s[100];
	int i,j;
	printf("Enter string with space : ");
	gets(s);
	for(i=0;i<strlen(s);i++)
		if(s[i]==' ')
			for(j=i;j<strlen(s)-1;j++)
				s[j]=s[j+1];
	printf("The string without space:\n%s",s);
	getch();
}
