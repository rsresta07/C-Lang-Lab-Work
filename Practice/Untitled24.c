
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n;
	float a[20],l;
	printf("How many numbers(<=20)? ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for (i=l;i<n;i++)
	{
		if(l<a[i])
			l=a[i];
	}
	printf("Largest number = %.2f", l);
	getch();
}
