/*wap to read marks obtained in your final exams in all subjects and find total marks, percentage, result(pass/fail), division*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float eng, math, acc, cp, mc, total, per;
	printf("Enter the marks for...\n");
	printf("English: ");
	scanf("%f",&eng);
	printf("Math: ");
	scanf("%f",&math);
	printf("Accounting: ");
	scanf("%f",&acc);
	printf("C programming: ");
	scanf("%f",&cp);
	printf("MP and CP: ");
	scanf("%f",&mc);
	
	/*for total*/
	total=eng+math+acc+cp+mc;
	printf("\nTotal marks: %.2f",total);
	
	/*for percentage*/
	per=(total/500)*100;
	printf("\nPercentage: %.2f\%%",per);
	
	/*result(pass/fail)*/
	if (per>=40 && eng>=40 && math>=40 && acc>=40 && cp>=40 && mc>=40)
	{
		printf("\nResult: PASS");
		/*division*/
		if(per>=80)
			printf("\nDivision: Distinction");
		else if (per>=60)
			printf("\nDivision: First Division");
		else if (per>=50)
			printf("\nDivision: Second Division");
		else if (per>=40)
			printf("\nDivision: Third Division");
		else
			printf("\nDivision: *");
	}
	else{
		printf("\nResult: FAIL");
		printf("\nDivision: *");
	}
	getch();
}
