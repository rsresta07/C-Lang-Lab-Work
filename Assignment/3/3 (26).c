#include<stdio.h>
#include<conio.h>
void main(){
	int row, col, k, a;
	for(row=1; row<=5; row++){
		for(col=1; col<=5-row; col++) 
			printf(" ");
		for(k=1; k<=(2*row-1); k++){
			if(k<row) 
				printf("%d",k);
    		else if(k==row){
				printf("%d",k);
				a=k;
			}
			else 
				printf("%d",--a);
		}
		printf("\n");
	}
	getch();
}
