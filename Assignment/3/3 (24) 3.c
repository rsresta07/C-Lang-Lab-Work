#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k=1;
	for(i=0;i<=3;i++){
		for(j=0;j<=1;j++){
			printf("%c",219);
			printf(" ");
		}
		printf("\n");
		if(i%2==0)
			printf("%c",255);
	}
	getch();
}
