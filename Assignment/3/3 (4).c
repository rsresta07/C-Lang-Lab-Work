//program to display first 10 natural number using do while loop

#include <stdio.h>
#include <conio.h>
void main()
{
	int i=1;
	do{
		printf("%4d",i++);
	}while(i<=10);
	getch();
}
