
/*wap to read 3 number and find the median number.*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int a, b ,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a,&b,&c);
	
	if(a>b&&a<c || a<b&&a>c)
	{
		printf("%d is the median.",a);
	}
	else if (b>a&&b<c || b<a&&b>c)
	{
		printf("%d is the median.",b);
	}
	else
	{
		printf("%d is the median.",c);
	}
	getch();
}
