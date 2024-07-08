/*wap to design struct student with roll, name, marks in c and display them in table format.*/
#include<stdio.h>
#include<conio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
void main(){
	struct student s[20];
    int i,n;
    printf("How many students? ");
    scanf("%d",&n);
    printf("\nEnter information:");    //storing information
    for(i = 0; i < n; i++){
        printf("\nRoll No.: ");
        
        scanf("%d",&s[i].roll);
        printf("First name: ");
        scanf("%s", s[i].name);
        printf("Marks in C: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nDisplaying Information:");  // displaying information
	printf("\nRoll No. Name      Marks in C"); 
    for (i = 0; i < n; i++)
        printf("\n%-9d%-10s%.2f",s[i].roll,s[i].name,s[i].marks);
    getch();
}
