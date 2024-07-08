//20.program to convert string into upper case without using function
#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	char text[100];
	printf("Enter a line of text : ");
	gets(text);
	for(i=0;text[i]!='\0';i++)
		if(text[i]>='a' && text[i]<='z')
			text[i]=text[i]-32;
	printf("String in upper case: \n %s",text);
	getch();
}
