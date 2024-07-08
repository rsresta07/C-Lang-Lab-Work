/*WAP to read n numbers from user and display the numbers,their sum and average*/
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,a[20],sum=0;
	float avg;
	printf("How many number? ");
	scanf("%d",&n);
	printf("Enter the number: ");
	for (i=0;i<n;i++)	
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		sum=sum+a[i];
	avg=sum/n;
	printf("the sum = %d\n",sum);
	printf("the avg = %.2f",avg);
	getch();
}
