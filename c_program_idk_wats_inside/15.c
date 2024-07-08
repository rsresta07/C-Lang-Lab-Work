//Write a menu based program to perform calculation 
//according to following choice
//		+ for addition
//		- for subtraction
//		* for multiplication
//		/ for division
#include<stdio.h>
#include<conio.h>
void main()
{
	char m;
	float res,a,b;
	first:
	printf("\n-----------Menu-----------\n");
	printf("+ for addition\n");
	printf("- for subtraction\n");
	printf("* for multiplication\n");
	printf("/ for division\n");
	printf("\n__________________________\n");	
	scanf("%c",&m);
	switch(m)
	{
		case '+':
			printf("Enter two numbers for addition: ");
			scanf("%f%f",&a,&b);
			res=a+b;
			printf("%.2f + %.2f = %.2f",a,b,res);
			break;
		case '-':
			printf("Enter two numbers for subtraction: ");
			scanf("%f%f",&a,&b);
			res=a-b;
			printf("%.2f - %.2f = %.2f",a,b,res);
			break;			
		case '*':
			printf("Enter two numbers for multiplication: ");
			scanf("%f%f",&a,&b);
			res=a*b;
			printf("%.2f * %.2f = %.2f",a,b,res);
			break;			
		case '/':
			printf("Enter two numbers for division: ");
			scanf("%f%f",&a,&b);
			res=a/b;
			printf("%.2f / %.2f = %.2f",a,b,res);		
			break;
		default:
			printf("Invalid!!\nEnter Again");
			goto first;
			break;
	}
	
	
	
	
	
	
	getch();
}
