/*wap to design struct employee with member ID, Name, Post, Salary
a) display record of N emplyee whose post is accountant
b) display detail of those emplyee whose salary is 30000-50000*/

//NOT Working
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char name[20];
	char post[20];
    int id;
    float sal;
};
void main(){
	struct employee e[20];
	int n,i;
	printf("How many employee? ");
	scanf("%d",&n);
    printf("\nEnter information:");
    for(i=0;i<n;i++){
    	printf("\nID: ");
		scanf("%d",&e[i].id);
    	fflush(stdin);
    	printf("Name: ");
    	gets(e[i].name);
    	printf("post: ");
    	gets(e[i].post);
    	printf("Salary: ");
		scanf("%f",&e[i].sal);
	}
	printf("\nEmployee with post 'Accountant':\n");
	//in a4 write -> printf("ID\tName\tPost\tSalary\n");
    printf("ID     Name                 Post            Salary\n"); 
    for(i=0;i<n;i++){
    	if(strcmp(e[i].post,"Accountant")==1 || strcmp(e[i].post,"accountant")==1)
    		printf("%-6d %-20s %-15s %.2f",e[i].id,e[i].name,e[i].post,e[i].sal);
    	printf("\n");
	}
	printf("\nEmployee with salary between 30000 to 50000:\n");
    printf("ID     Name                 Post            Salary\n");
	for(i=0;i<n;i++){
		if(e[i].sal>=30000 && e[i].sal<=50000)
    		printf("%-6d %-20s %-15s %.2f",e[i].id,e[i].name,e[i].post,e[i].sal);
    	printf("\n");
	}
    getch();
}
