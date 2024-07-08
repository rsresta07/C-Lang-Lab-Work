//WAP to design a structure course with members code,title and credit hours. 
//Write a main program to read the details of 5 course and display the details of course whose credit hours is >=4.
#include<stdio.h>
#include<conio.h>
struct course{
	char code[10];
	char title[20];
	int cr;	
};
void main(){
	struct course s[10];
	int i;
	printf("Enter the following details: ");
	for(i=0;i<5;i++){
		printf("\nFor Course %d:\n",i+1);
		printf("Course Code: ");
		scanf("%s",s[i].code);
		fflush(stdin);
		printf("Course Title: ");
		gets(s[i].title);
		printf("Credit Hours: ");
		scanf("%d",&s[i].cr);
	}
	printf("\nDetails of credit hours >=4:\n");
	printf("Course Code  Course Title         Credit Hours\n");
	for(i=0;i<5;i++)
		if(s[i].cr>=4)
			printf("%-12s %-20s %d\n",s[i].code,s[i].title,s[i].cr);
	getch();
}
