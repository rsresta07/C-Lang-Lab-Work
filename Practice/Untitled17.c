/*program to find factorial of a number*/

#include<stdio.h>
#include<conio.h>

void main()
{
  int i,f=1,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
	{
		f=f*i;
 	}
  printf("Factorial of %d is: %d",num,f);
  getch();
}
