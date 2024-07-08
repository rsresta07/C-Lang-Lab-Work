#include <stdio.h>
#include <conio.h>

void main()
{
    float result, len, brea;
    int choice;
    printf("Press 1 -> Calculate area of rectangle\n");
    printf("Press 2 -> Calculate perimeter of rectangle\n");
    printf("Press 3 -> Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
      
    switch (choice) 
	{
    	case 1: 
        	printf("\nEnter length: ");
        	scanf("%f",&len);
        	printf("Enter breadth: ");
        	scanf("%f",&brea);
        	result = len*brea;
        	printf("Area of rectangle = %.2f",result);
        break;
    	case 2:
        	printf("\nEnter length: ");
        	scanf("%f",&len);
        	printf("Enter breadth: ");
        	scanf("%f",&brea);
        	result = 2*(len+brea);
        	printf("Perimeter of rectangle = %.2f",result);
        break;
    	case 3: 
        	printf("\nExit");
        break;
    	default:
        	printf("Wrong Input\n");
    }
    getch();
}
