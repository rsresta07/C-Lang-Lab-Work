//18. Program to transpose a matrix
#include<stdio.h>
#include<conio.h>
void main(){
	int m[10][10],t[10][10],i,j,a,b;
	printf("Enter order of the matrix:");
    scanf("%d %d",&a,&b);
	printf("Enter elements of matrix:\n");
	for (i=0;i<a;++i)
        for (j=0;j<b;++j) 
			scanf("%d",&m[i][j]);
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			t[j][i]=m[i][j];
	printf("Transpose:\n");
	for(i=0;i<b;i++){
		for(j=0;j<a;j++)
			printf("%d ",t[i][j]);
		printf("\n");
	}
	getch();
}
	
	
	
