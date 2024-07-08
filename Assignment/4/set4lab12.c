/*11. write a program to read age of 20 peoples and count the numbers of child , teen, adult, young,and old
given
age<13==child
age>=13 and age<20==teen
age>=20 and age <31 adult
age >=31 and age<55==young
age >=55==old */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[50],i,child=0,teen=0,adu=0,you=0,old=0;
	printf("Enter the age of 20 people: ");
	for(i=0;i<20;i++)
		scanf("%d",&a[i]);
	for(i=0;i<20;i++){
		if(a[i]<13)
			child++;
		else if(a[i]<20)
			teen++;
		else if(a[i]<31)
			adu++;
		else if(a[i]<55)
			you++;
		else
			old++;
	}
	printf("Child = %d\nTeen = %d\nAdult = %d\nYoung = %d\nOld = %d",child,teen,adu,you,old);
	getch();
}
