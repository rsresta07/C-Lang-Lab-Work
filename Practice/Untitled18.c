/*program to genrate the first n terms of fibonacci sequence*/

#include <stdio.h>
#include<conio.h>

void main() 
{
	int i, n;
	int t1 = 0, t2 = 1;
	int next = t1 + t2; /*initialize the next term (3rd term)*/
	
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	
	/*print the first two terms t1 and t2*/
	printf("Fibonacci Series: %d, %d, ", t1, t2); 
	
	/*print 3rd to nth terms*/
	for (i = 3; i <= n; ++i) 
	{
  		printf("%d, ", next);
    	t1 = t2;
    	t2 = next;
		next = t1 + t2;
	}
	getch();
}
