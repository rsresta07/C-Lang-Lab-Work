#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    char choice;
    printf("Enter two interger: ");
    scanf("%d%d", &a, &b);
    printf("\nMenu for operation:");
    printf("\n+ for addition \n- for subtraction");
    printf("\n* for multiplication \n/ for divide");
    printf("\nEnter your choice: ");
    scanf(" %c",&choice);
      
    switch (choice) 
	{
		case '+':
			printf("\n%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("\n%d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("\n%d * %d = %d",a,b,a*b);
			break;
		case '/':
			printf("\n%d / %d = %d",a,b,a/b);
			break;
		default:
			printf("\nInvalid operator...");
	}
	getch();
}
