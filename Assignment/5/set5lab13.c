//WAP to dipslay following triangle of asterisk of N lines using functions
//  *
// ***
//*****
#include<stdio.h>
#include<conio.h>
void aste(int);
void main(){
	int n;
	printf("How many lines? ");
	scanf("%d",&n);
	aste(n);
	getch();
}
void aste(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(k=0;k<=n-i;k++)
			printf(" ");
		for(j=0;j<=2*i;j++)
			printf("*");
		printf("\n");	
	}
}





