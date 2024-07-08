#include<stdio.h>
#include<conio.h>
void main(){
	int row, col,k;
	for(row=1; row<=4; row++){
		for(col=1; col<=4-row; col++) 
			printf(" ");
		for(k=1; k<=(2*row-1); k++)
			printf("*");
		printf("\n");
	}
	for(row=3; row>=1; row--){
		for(col=1; col<5-row; col++) 
			printf(" ");
		for(k=row; k<=(2*row-1); k++)
			printf("*");
		for(k=0; k<row-1; k++)
			printf("*");
		printf("\n");
	}
	getch();
}
