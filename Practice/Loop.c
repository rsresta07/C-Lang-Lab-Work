/*loop statement*/

#include <stdio.h>
#include <conio.h>

void main()
{
	//From For loop statement
	int i=0;
	for(i=0; i< 10; i++)
	{
		printf("Enter\n");
	}
	
	
	// From While loop statement
    int a = 1; //initialization expression
    while (a<6) // test expression
    {
        printf("Hello World\n");    
        a=a+1; // update expression
    }
    
    
    //From do while statement
    int b = 0; // Initialization expression
    do
    {
        printf( "Hello\n"); // loop body    
        b++; // update expression
    }  while (b < 5);   // test expression
    
	getch();
}
