#include <stdio.h>
#include <conio.h>
#define PI 3.14285

void main()
{
    float result, num;
    int choice;
    printf("Press 1 to calculate area of circle\n");
    printf("Press 2 to calculate area of square\n");
    printf("Press 3 to calculate area of sphere\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
      
    switch (choice) 
	{
    	case 1: 
        	printf("\nEnter radius: ");
        	scanf("%f",&num);
        	result = PI * num * num;
        	printf("Area of sphere = %.2f",result);
        break;
    	case 2:
        	printf("Enter side of square: ");
        	scanf("%f",&num);
        	result = num * num;
        	printf("Area of square = %.2f",result);
        break;
    	case 3: 
        	printf("Enter radius: ");
        	scanf("%f",&num);
			result = 4 * (3.14 * num * num);
        	printf("Area of sphere = %.2f",result);
        break;
    	default:
        	printf("wrong Input\n");
    }
    getch();
}
