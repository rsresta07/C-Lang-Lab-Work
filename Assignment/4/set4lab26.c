//26.program to check whether the word is palindrome or not using function
#include<stdio.h>
#include<conio.h>
void main(){
	int i=0,l=0,flag=0;
	char str[100],str2[100],temp;
	printf("Enter string: ");
	gets(str);
	while(str[l]!='\0')
		l++;
	for(i=0;i<l;i++)
        if(str[i]!=str[l-i-1]){
            flag=1;
            break;
        }
	if(flag)
        printf("%s is not a palindrome",str); 
    else
        printf("%s is a palindrome",str);
	getch();
}

