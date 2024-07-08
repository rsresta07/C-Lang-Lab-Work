//WAP to find smallest of three numbers using function
#include<stdio.h>
#include<conio.h>
float min(float,float,float);
void main(){
	float a,b,c,small;
	printf("Enter three numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	printf("Smallest number = %.2f",min(a,b,c));
	getch();
}
float min(float m,float n,float o){
	if(m<=n&&m<=o)
		return m;
	else if(n<=m&&n<=o)
		return n;
	return o;
}





