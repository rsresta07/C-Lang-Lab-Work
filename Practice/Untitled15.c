/*program to display first 10 terms of series...*/
/*50,25,76,38,19,58.....*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int i, tm=50;
	for (i=1;i<=10;i++)
	{
		printf("%6d",tm);
		if(tm%2==0)
			tm=tm/2;
		else
			tm=3*tm+1;
	}
	getch();
}
