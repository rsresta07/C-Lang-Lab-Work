/* Area of classroom using struct*/
#include<conio.h>
#include<stdio.h>
struct distance{
	int feet;
	float inch;
};
struct room{
	struct distance length;
	struct distance breadth;
};
void main(){
	struct room cr;
	float area,l,b;
	printf("Length in feet and inches: ");
	scanf("%d%f",&cr.length.feet,&cr.length.inch);
	printf("Breadth in feet and inches: ");
	scanf("%d%f",&cr.breadth.feet,&cr.breadth.inch);
	l=cr.length.feet+cr.length.inch/12;
	b=cr.breadth.feet+cr.breadth.inch/12;
	area=l*b;
	printf("Area of Classroom = %.2f square feet",area);
	getch();
}
