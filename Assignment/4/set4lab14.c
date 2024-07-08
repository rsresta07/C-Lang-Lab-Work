//14. program to add two matrices by asking matrrix order from user
#include<stdio.h>
#include<conio.h>
void main(){
	int a[10][10],b[10][10],s[10][10];
	int r1,c1,r2,c2,i,j,k;
	printf("Row of matrix 1: ");
	scanf("%d",&r1);
	printf("Column of matrix 1: ");
	scanf("%d",&c1);
	printf("Row of matrix 2: ");
	scanf("%d",&r2);
	printf("Column of matrix 2: ");
	scanf("%d",&c2);
	if(c1!=r2)
		printf("Addition is not possible!!!");
	else{
		printf("Enter first matrix:\n");
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("Enter second matrix:\n");
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);	
		printf("The matrix Addition:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				s[i][j]=a[i][j]+b[i][j];
				printf("%d\t",s[i][j]);
			}
			printf("\n");
		}
	}	
	getch();
}               
