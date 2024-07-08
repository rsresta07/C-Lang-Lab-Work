/*wap to read age of a person and display remarks.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	unsigned int age;
	printf("Enter the age: ");
	scanf("%d",&age);
	
	if(age<12)
		printf("CHILD");
	else if (age<20)
		printf("TEEN");
	else if (age<30)
		printf("ADULT");
	else if (age<55)
		printf("YOUNG");
	else
		printf("OLD");
	getch();
}
