#include <stdio.h>
#include<conio.h>
struct employee{
	char name[20], post[10];
    int id;
    float sal;
};

void main(){
	struct employee e;
	int n,i;
	printf("How many employee?\n");
	scanf("%d",&n);
    printf("\nEnter information:\n");
    for(i=0;i<n;i++){
    	printf("\nID: ");
		scanf("%d",&e.id);
    	fflush(stdin);
    	printf("Name: ");
    	gets(e.name);
    	printf("post: ");
    	gets(e.post);
    	printf("Salary: ");
   	 	scanf("%f",&e.sal);
	}
    if(e.post=="Accountant" || e.post =="accountant"){
    	printf("Displaying Information of people with postion Accountant:\n");
    	printf("ID     Name                 Post       Salary\n");
    	printf("%-6d %-20s %-10s %.2f",e.id,e.name,e.post,e.sal);
	}
	else
		printf("NO Result");
	printf("\n");
	if(e.sal>=30000 && e.sal<=50000){
		printf("Displaying Information of people with salary between 30000 to 50000:\n");
    	printf("ID     Name                 Post       Salary\n");
    	printf("%-6d %-20s %-10s %.2f",e.id,e.name,e.post,e.sal);
	}
	else
		printf("NO Result");
    getch();
}
