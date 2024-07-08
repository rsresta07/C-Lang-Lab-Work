#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,a;
	for(i=5; i>=1; i--){
		for(j=1; j<=5-i; j++) 
			printf(" ");
		for(k=1; k<=(2*i-1); k++){
			if(k<i) 
				printf("%d",k);
    		else if(k==i){
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
