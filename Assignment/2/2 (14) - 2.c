#include <stdio.h>
#include <conio.h>

void main()
{
    float result, len, brea;
    int choice;
    printf("Press 1 -> calculate area of rectangle\n");
    printf("Press 2 -> calculate perimeter of rectangle\n");
    printf("Press 3 -> exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    
    if(choice==1 && choice==2)
	{
		printf("\nEnter length: ");
       	scanf("%f",&len);
       	printf("Enter breadth: ");
       	scanf("%f",&brea);
	}
	else
		break;
    switch (choice) 
	{
    	case 1: 
        	result = len*brea;
        	printf("Area of rectangle = %.2f",result);
        	break;
    	case 2:
        	result = 2*(len*brea);
        	printf("Perimeter of rectangle = %.2f",result);
        	break;
    	case 3: 
        	printf("The End");
        	break;
		default:
        	printf("Wrong Input\n");
    }
    getch();
}
