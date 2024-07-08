/*program to display first 10 terms of series...*/
/*1,5,9,.....*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int i, tm=1;
	for (i=1;i<=10;i++)
	{
		printf("%6d",tm);
		tm=tm+4;
	}
	getch();
}
