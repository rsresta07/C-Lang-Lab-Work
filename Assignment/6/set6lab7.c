/*WAP to Calculate the length of the string using a pointer*/
#include <stdio.h>
#include<conio.h>
int length(char*);
void main() {
	char str1[25];
	int l;
	printf("Enter a string : ");
	fgets(str1, sizeof str1, stdin);
	l = length(str1);
	printf("Length of string: %s: %d ", str1, l-1);
	getch();
}
int length(char* ch){
	int ctr = 0;
	while (*ch != '\0') {
		ctr++;
    	ch++;
	}
	return ctr;
}
