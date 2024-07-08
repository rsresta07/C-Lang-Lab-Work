//wap read structure student to read 5 students' name, roll, age and sort and display it by roll.
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
	char name[30];
	int roll,age;
};
void main(){
	struct student s[5];
	int i,j,t,t1;
	char t2[30];
	printf("Enter Roll No, Name and Age:\n");
	for(i=0;i<5;i++)
		scanf("%d%s%d",&s[i].roll,&s[i].name,&s[i].age);
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			if(s[i].roll>s[j].roll){
				t=s[i].roll;
				s[i].roll=s[j].roll;
				s[j].roll=t;
				strcpy(t2,s[i].name);
				strcpy(s[i].name,s[j].name);
				strcpy(s[j].name,t2);
				t1=s[i].age;
				s[i].age=s[j].age;
				s[j].age=t1;
			}
	printf("After Sorting:\n");
	for(i=0;i<5;i++)
		printf("%d\t%s\t%d\n",s[i].roll,s[i].name,s[i].age);
	getch();
}
