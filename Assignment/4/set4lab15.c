//15. write a program to find sum of rows and column of matrix
#include <stdio.h>
#include<conio.h>
void main(){
	int a[10][10],i,j,m,n,sum=0;
    printf("Enter the order of matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the matrix:\n");
    for (i=0;i<m;i++)
        for (j=0;j<n;j++) 
			scanf("%d",&a[i][j]);
    for (i=0;i<m;i++){
        for (j=0;j<n;j++)
            sum=sum+a[i][j];
		printf("Sum of row %d = %d\n",i+1,sum);
        sum=0;
    }
    for (j=0;j<n;j++){
        for (i=0;i<m;i++)
            sum=sum+a[i][j];
        printf("Sum of column %d = %d\n",j+1,sum);
        sum=0;
    }
    getch();
}
