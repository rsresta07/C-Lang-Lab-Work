/*16. Program to multiply matrix A and B
A== 1 5 2     B=-1 1
    3 4 6        2 3
				 5 2 */
				 
#include<stdio.h>
#include<conio.h>
void main(){
	int p[10][10], r1=2, c1=3, r2=3, c2=2, i, j, k;
	int a[2][3] = {{1,5,2},{3,4,6}};
	int b[3][2] = {{-1,1},{2,3},{5,2}};
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			p[i][j]=0;
			for(k=0;k<c1;k++)
				p[i][j]=p[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("The matrix multiplication:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++)
			printf("%d\t",p[i][j]);
		printf("\n");
	}	
	getch();
}               
