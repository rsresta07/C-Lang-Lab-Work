// 8. Program to read n items and read them in acsending or decending order depending under user choice. 
#include<stdio.h>
#include<conio.h>
void main(){
	char p;
	int i,n,j,temp,num[100];
	printf("Enter how many numbers? ");
	scanf("%d",&n);
	printf("Enter %d numbers to sort: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("\nA for Ascending Order");
	printf("\nD for Descending Order\n-> ");
	scanf(" %c",&p);
	if(p=='a' || p=='A'){
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
				if(num[j]>num[j+1]){
					temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;	
				}
		printf("\nNumbers in ascending order:\n ");
	}
	else if(p=='d' || p=='D'){
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
				if(num[j]<num[j+1]){
					temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;	
				}
		printf("\nNumbers in descending order:\n");
	}
	for(i=0;i<n;i++)
		printf("%4d",num[i]);
	getch();
}
