/*Write a program in C to print a string in reverse using a pointer.*/
#include <stdio.h>
#include<conio.h>
int main(){
	char str1[50],revs[50];
    char *stp = str1,*rvp = revs;
    int i=-1;
    printf("Enter a string: ");
    scanf("%s",str1);
    while(*stp){
		stp++;
		i++;
    }
    while(i>=0){
    	stp--;
		*rvp=*stp;
		rvp++;
		--i;
    }
    *rvp='\0';
    printf("Reverse: %s",revs);
    return 0;
}
