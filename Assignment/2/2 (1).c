/*wap to read a lowcase cahracter and convert it into uppercase
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	char lc,uc;
	printf("Enter a lowercase character: ");
	scanf("%c",&lc);
	if(lc>='a' && lc<='z')
	{
		uc=lc-32;
		printf("The uppercase of '%c' is '%c'",lc,uc);
	}
	else
	{
		printf("The given character is not lowercase character.");
	}
	getch();
}
