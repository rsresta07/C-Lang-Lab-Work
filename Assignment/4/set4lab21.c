//21.program to find reverse of string
#include<stdio.h>
#include<conio.h>
void main(){
	int i,l=0;
	char str[100],temp;
	printf("Enter a line of text to reverse : ");
	gets(str);
	while(str[l]!='\0')
		l++;
	for(i=0;i<l/2;i++){
		temp=str[i];
		str[i]=str[l-1-i];
		str[l-1-i]=temp;
	}
	printf("String in reverse: \n%s",str);
	getch();
}
