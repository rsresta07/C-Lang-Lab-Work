//13. program to read salaries of n employes and count the numbers of employes receiving salaries between 40000 to 600000
#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,s[100],c=0;
	printf("How many employees? ");
	scanf("%d",&n);
	printf("Enter the salaries:\n");
	for(i=0;i<n;i++){
		printf("Employee %d: ",i+1);
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
		if(s[i]>=40000 && s[i]<=60000)
			c++;
	printf("Employees with salary between 40000 to 60000 is %d",c);
	getch();
}
