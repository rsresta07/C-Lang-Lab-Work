#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k;
	for(i=1; i<=5; i++){
		for(j=65; j<=70-i; j++)
			printf("%c",j);
		for(k=1;k<=2*(i-1);k++)
			printf(" ");
		for(j=70-i;j>=65;j--)
			printf("%c",j);
		printf("\n");
	}
	getch();
}
