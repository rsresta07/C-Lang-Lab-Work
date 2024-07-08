// 19.Program to find the sum of diagonal elements of a square matrix 
#include<stdio.h>
#include<conio.h>
void main(){
	int m[10][10];
	int r,c,i,j,sum=0;
	printf("Enter order of square matrix: ");
	scanf("%d %d",&r,&c);
	if(r!=c)
		printf("Not a square matrix!!\n");
	else{
		printf("Enter elements of matrix:\n");
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				scanf("%d",&m[i][j]);
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				if(i==j)
					sum=sum+m[i][j];
		printf("The sum of diagonal elements of a square matrix: %d\n",sum);
	}
	getch();
}               
