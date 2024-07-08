#include <stdio.h>
#include<conio.h>
struct course{
    char code[6];
	char title[20];
    int ch;
};
void main(){
	struct course c[100];
	int i;
    printf("Enter information:\n");
    for(i=0;i<5;i++){
    	printf("Code: ");
    	gets(c[i].code);
    	printf("Subject: ");
    	gets(c[i].title);
    	printf("Credit Hours: ");
    	scanf("%d", &c[i].ch);
	}
    printf("Displaying Information:\n");
    printf("Code   Title                 Credit Hours\n");
    for (i = 0; i<5; i++)
    	if(c[i].ch>3)
    		printf("%-6s %-20s %d",c[i].code,c[i].title,c[i].ch);
    else
    	printf("No Result!!!");
    getch();
}
