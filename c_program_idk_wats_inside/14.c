//Write a menu based program for:
//	1. Area of rectangle
//	2. Perimeter of rectangle
//	3. Exit
#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	float a,p,l,b;
	first:
	printf("\n-----------Menu-----------\n");
	printf("1.  Area of rectangle\n");
	printf("2.  Perimeter of rectangle\n");
	printf("3.  Exit\n");
	printf("\n__________________________\n");	
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("Enter the length and breadth to calculate Area: ");
			scanf("%f%f",&l,&b);
			a=l*b;
			printf("The Area is %.2f.",a);
			break;
		case 2:
			printf("Enter the length and breadth to calculate Perimeter: ");
			scanf("%f%f",&l,&b);
			p=2*(l+b);
			printf("The Perimeter is %.2f.",p);
			break;			
		case 3:
			return 1;
		default:
			printf("Invalid!!\nEnter Again");
			goto first;
			break;
	}
	
	
	
	
	
	
	getch();
}
