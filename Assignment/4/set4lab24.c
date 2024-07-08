//24.program to whether a word is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int i,j;
	char str[100],str2[100],temp;
	printf("Enter string: ");
	gets(str);
	for(i=strlen(str)-1,j=0;i>=0;i--,j++)
		str2[j]=str[i];
	str2[j]='\0';
	if(strcmp(str,str2)==0)
		printf("Palindrome");
	else
		printf("not Palindrome");
	getch();
}
