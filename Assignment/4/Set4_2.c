// program to read n numbers and display them also find out their sum and average
#include<stdio.h>
#include<conio.h>
void main()
{
	float a[100], sum=0, avg;
	int i, n; 
	printf("Enter the limit of numbers : ");
	scanf("%d", &n);
	printf("Enter the numbers: ");
	for(i=0; i< n; i++)
		scanf("%f", &a[i]);
 	printf("The numbers are: ");
 	for(i=0; i<n; i++)
		printf("%.2f ",a[i]);
	for(i=0; i< n; i++){
		sum = sum + a[i];
		avg = sum/n;
	}
	printf("\nSum is %.2f\n", sum);
	printf("Average is %.2f", avg);
	getch();
}

