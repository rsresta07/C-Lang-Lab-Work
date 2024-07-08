//9. Program to read n numbers in an array and find the sum of odd numbers
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,j,temp,num[100],sum=0;
	printf("Enter how many numbers? ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<n;i++){
		if(num[i]%2!=0)
			sum=sum+num[i];
	}
	printf("\nThe sum of Odd numbers: %d",sum);
	getch();
}
