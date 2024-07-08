// selection sort
#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],i,j,n,temp;
	printf("How many numbers?: ");
	scanf("%d",&n);
	printf("Enter %d integers: ", n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nThe numbers in ascending order:\n");
	for(i=0;i<n;i++)
		printf("%4d",a[i]);		
	getch();
}
