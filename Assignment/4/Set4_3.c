// program to find largest and smallest
#include<stdio.h>
#include<conio.h>
void main(){
	int i, n;
	float a[20], l, s;
	printf("How many numbers? ");
	scanf("%d",&n);
	printf("Enter %d number: ",n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	l = a[0];
	s = a[0];
	for(i=1;i<n;i++){
		if(l<a[i])
			l = a[i];
		else
			s = a[i];
	}
	printf("Largest number = %.2f\n",l);
	printf("Smallest number = %.2f",s);
	getch();
}
