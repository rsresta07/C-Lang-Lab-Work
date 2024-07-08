/*WAP to read N numbers and sort them in asending order.(using bubble sort)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,i,j,temp;
	printf("How many numbers to sort? ");
	scanf("%d",&n);
	printf("Enter the number to sort :");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if (a[j]>a[j+1]){
				temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Numbers is ascending order are :");
	for (i=0;i<n;i++)
		printf("%4d",a[i]);
	getch();
}
