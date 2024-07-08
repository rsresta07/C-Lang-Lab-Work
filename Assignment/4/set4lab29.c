//29. program to read name of n students and display in monitor
#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	char n,num[50][50];
	printf("How many students? ");
	scanf("%d",&n);
	printf("Enter Details:\n");
	for(i=0;i<n;i++){
		printf("Student %d: ",i+1);
		scanf("%s",num[i]);
	}
	printf("Name of the students:\n");
	for(i=0;i<n;i++)
		printf("%s\n",num[i]);
	getch();
}
