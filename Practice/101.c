#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i, vow=0,con=0,dig=0,spa=0,spch=0;
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') 
			vow++;
		else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]=='Z'))
			con++;
		else if(str[i]>='0' && str[i]<='9')
			dig++;
		else if(str[i]==' ')
			spa++;
		else
			spch++;
	}
	printf("\nVowels= %d",vow);
	printf("\nConsonants= %d",con);
	printf("\nDigits= %d",dig);
	printf("\nSpaces= %d",spa);
	printf("\nSpecial Character= %d",spch);
	getch();
}
