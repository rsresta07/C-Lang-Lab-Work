//WAP to calculate Simple Interest using function
//i)	With function returning values and passing arguments
//ii)	With function returning values and passing no arguments
//iii)	With function returning no values and passing arguments
//iv)	With function returning no values and passing no arguments
#include<stdio.h>
#include<conio.h>
float first(float,float,float);
float second();
void third(float,float,float);
void fourth();
void main()
{
	float p,t,r,si;
	int ch;
	printf("Choose a method: \n");
	printf("1. Returning values and passing arguments\t");
	printf("2. Returning values and passing no arguments\n");
	printf("3. Returning no values and passing arguments\t");
	printf("4. Returning no values and passing no arguments\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter Principal, rate and time: ");
			scanf("%f%f%f",&p,&t,&r);
			si=first(p,t,r);
			printf("SI using function returning values and passing arguments: %.2f",si);
			break;
		case 2:
			si=second();
			printf("SI using function returning values and passing no arguments: %.2f",si);
			break;
		case 3:
			printf("Enter Principal, rate and time: ");
			scanf("%f%f%f",&p,&t,&r);
			third(p,t,r);
			break;
		case 4:
			fourth();
			break;
		default:
			printf("Invalid!!");
	}
	getch();
}
float first(float p,float t,float r)
{
	return (p*t*r)/100;
}
float second()
{
	float p,t,r;
	printf("Enter Principal, rate and time: ");
	scanf("%f%f%f",&p,&t,&r);	
	return (p*t*r)/100;
}
void third(float p,float t,float r)
{
	float si=(p*t*r)/100;
	printf("SI using function returning no values and passing arguments: %.2f",si);
}
void fourth()
{
	float p,t,r,si;
	printf("Enter Principal, rate and time: ");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("SI using function returning no values and passing no arguments: %.2f",si);
}







