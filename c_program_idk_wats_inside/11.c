//Program to read marks obtained in all subjects
//and calculate total marks,percentage,result(pass,fail),
//division
#include<stdio.h>
#include<conio.h>
void main()
{
	float eng, math, acc, c, mp, tot, per;
	printf("Enter marks for the following:");
	printf("\n_______________________________\n");
	
	printf("\nEnglish: ");
	scanf("%f",&eng);
	printf("\nMath: ");
	scanf("%f",&math);
	printf("\nAccounting: ");
	scanf("%f",&acc);
	printf("\nC programming: ");
	scanf("%f",&c);
	printf("\nMicroprocessor and Computer Architecture: ");
	scanf("%f",&mp);
	
	tot=eng+math+acc+c+mp;
	printf("\nTotal marks: %.2f",tot);
	
	per=tot/5;
	printf("\nPercentage: %.2f",per);
	
	if (per>=40&&eng>=40&&math>=40&&acc>=40&&c>=40&&mp>=40)
	{
		printf("\nResult: Pass");
		
		switch((int)per/10)
		{
			case 10:
			case 9:
			case 8:
				printf("\nDivision: Distinction");
				break;
			case 7:
			case 6:
				printf("\nDivision: First Division");
				break;
			case 5:
				printf("\nDivision: Second Division");
				break;
			case 4:
				printf("\nDivision: Third Division");
				break;
			default:
				printf("\nDivision: *");
		}
	}			
	else
	{
		printf("\nResult: Fail");
		printf("\nDivision: *");
	}
	
	
	
	

	getch();
}
