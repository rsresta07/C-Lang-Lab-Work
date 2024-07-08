/*Write a number to find largest and smallest number from set of N numbers entered by users using array*/
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n;
	float large,small,a[20];
	printf("How many number? ");
	scanf("%d",&n);
	printf("Enter the number: ");
	for (i=0;i<n;i++)
		scanf("%f",&a[i]);
	large=a[0];
	for(i=0;i<n;i++)
		if(large<a[i])
			large=a[i];
	small=a[0];
	for(i=0;i<n;i++)
		if(small>a[i])
			small=a[i];
	printf("Smallest number = %2.f\n",small);
	printf("Largest number = %2.f",large);
	getch();	
}
