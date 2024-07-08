//wap to count number of vowel and consonants in a string using pointer.
#include<stdio.h>
#include<conio.h>
int main(){
    char str1[50];
    char *pt;
    int  ctrV,ctrC;
    printf("Enter a string: ");
    fgets(str1, sizeof str1, stdin);
    pt=str1;
    ctrV=ctrC=0;
	while(*pt!='\0'){
        if(*pt=='A' ||*pt=='E' ||*pt=='I' ||*pt=='O' ||*pt=='U' ||*pt=='a' ||*pt=='e' ||*pt=='i' ||*pt=='o' ||*pt=='u')
            ctrV++;
        else
            ctrC++;
        pt++; //pointer is increasing for searching the next character
	}
    printf("Number of vowels: %d\n",ctrV); 
	printf("Number of consonants: %d",ctrC-1);
    getch();
}
