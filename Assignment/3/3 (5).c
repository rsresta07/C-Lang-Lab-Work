/*generate first n odd terms*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n;
	printf("Enter 'n' number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i=i+2)
		printf("%3d",i);
	getch();
}
