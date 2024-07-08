#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k=1;
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
			if (k==1)
				printf("%c",219);
			else
				printf("%c",255);
			k*=-1;
		}
		if(6%2==0)
			k*=-1;	
		printf("\n");
	}
	getch();
}
