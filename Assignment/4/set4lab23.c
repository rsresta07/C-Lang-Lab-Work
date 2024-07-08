//23.program to concatinate string without using function
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,l=0;
	char str1[100],str2[100];
	printf("Enter string 1 : ");
	gets(str1);
	printf("Enter string 2 : ");
	gets(str2);
	while(str1[l]!='\0')
		l++;
	for(i=0;str2[i]!='\0';i++)
		str1[l+i]=str2[i];
	str2[l+i]='\0';
	printf("The concatinate String is \n%s",str1);
	getch();
}

