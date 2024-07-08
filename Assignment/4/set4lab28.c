//28. program to count numbers of words from a line of text
#include<stdio.h>
#include<conio.h>
void main(){
	int i,l=0,cnt=0;
	char str[100];
	printf("Enter line of text: ");
	gets(str);
	for (i=0;str[i]!='\0';i++)
		if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
			cnt++;
	printf("Total words = %d",cnt);
	getch();
}
