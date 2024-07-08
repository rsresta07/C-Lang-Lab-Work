//calculator

#include <stdio.h>
#include <conio.h>

void main()
{
	int n1, n2, a;
	char o;
	printf("Enter a number: ");
	scanf("%d", &n1);
	printf("Enter an operator: ");
	scanf("%s", &o);
	printf("Enter a second number: ");
	scanf("%d",&n2);
	
	switch (o){
		case '+': a=n1+n2;
		printf("%d + %d = %d",n1,n2,a);
		break;
		
		case '-': a=n1-n2;
		printf("%d - %d = %d",n1,n2,a);
		break; 
		
		case '*': a=n1*n2;
		printf("%d * %d = %d",n1,n2,a);
		break;
		
		case '/': a=n1/n2;
		printf("%d / %d = %d",n1,n2,a);
		break; 
		
		case '%': a=n1%n2;
		printf("%d % %d = %d",n1,n2,a);
		break;
	}
	getch();
}
