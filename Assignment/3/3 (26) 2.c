#include<stdio.h>
#include<conio.h>
void main()
{
	int row, col, k, a;
	for(row=1; row<=4; row++)
	{
		for(col=1; col<=4-row; col++) 
			printf(" ");
		for(k=1; k<=(row-1); k++)
			printf("*");
		printf("\n");
	}
	getch();
}
