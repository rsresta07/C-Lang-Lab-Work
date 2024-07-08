//30.program to read n words and sort them in alphabetical order
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int i,j;
	char n,word[50][50],w[100];
	printf("How many words? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Word %d: ",i+1);
		scanf("%s",word[i]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(strcmp(word[i],word[j])>0){
            	strcpy(w,word[i]);
            	strcpy(word[i],word[j]);
            	strcpy(word[j],w);
			}
	printf("Words in alphabetical order:\n");
	for(i=0;i<n;i++)
		printf("%s ",word[i]);
	getch();
}
