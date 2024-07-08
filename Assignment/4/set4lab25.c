#include<stdio.h>
#include<conio.h>
void main(){
	char s[100];
	int i,vow,con,dig,wh,sp;
	vow=con=dig=wh=sp=0;
	printf("Enter the string: ");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
			vow++;
		else if((s[i]>'a' && s[i]<='z') || (s[i]>'A' && s[i]<='Z'))
			con++;
		else if (s[i]>='0' && s[i]<='9')
			dig++;
		else if (s[i]==' ')
			wh++;
		else
			sp++;
	}
	printf("Vowels = %d\n",vow);
	printf("Consonants = %d\n",con);
	printf("Digits = %d\n",dig);
	printf("Whitespaces = %d\n",wh);
	printf("Special Characters = %d\n",sp);
	getch();
}
