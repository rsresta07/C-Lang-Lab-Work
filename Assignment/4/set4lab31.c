//31. program to sort (aman,akesh,anish,anam,anil,anju) in alphabetical order
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int i,j;
	char num,name[50][50],n[100];
	for(i=0;i<6;i++){
		printf("Enter name %d: ",i+1);
		scanf("%s",name[i]);
	}
	for(i=0;i<6;i++)
		for(j=i+1;j<6;j++)
			if(strcmp(name[i],name[j])>0){
            	strcpy(n,name[i]);
            	strcpy(name[i],name[j]);
            	strcpy(name[j],n);
			}
	printf("Words in alphabetical order:\n");
	for(i=0;i<6;i++)
		printf("%s\n",name[i]);
	getch();
}
