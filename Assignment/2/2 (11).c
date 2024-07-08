/*wap to read marks obtained in your final exams in all subjects and find total marks,
percentage, result(pass/fail), division*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float eng, math, acc, cp, mc, total, per;
	printf("Enter the marks for English: ");
	scanf("%f",&eng);
	printf("Enter the marks for Math: ");
	scanf("%f",&math);
	printf("Enter the marks for Accounting: ");
	scanf("%f",&acc);
	printf("Enter the marks for C programming: ");
	scanf("%f",&cp);
	printf("Enter the marks for MP and CP: ");
	scanf("%f",&mc);
	
	/*for total*/
	total=eng+math+acc+cp+mc;
	printf("\nTotal marks: %.2f",total);
	
	/*for percentage*/
	per=(total/500)*100;
	printf("\nPercentage: %.2f",per);
	
	/*result(pass/fail)*/
	if (per>=40 && eng>=40 && math>=40 && acc>=40 && cp>=40 && mc>=40)
	{
		printf("\nResult: PASS");
		/*division*/
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
				printf("\nDivision: -----");
				break;
		}
	}
	else
	{
		printf("\nResult: FAIL");
		printf("\nDivision: -----");
	}
	getch();
}
