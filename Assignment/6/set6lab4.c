/*Write a program in C to add two numbers using pointers*/
#include<stdio.h>
#include<conio.h>
void main(){
   int fn, sn, *pt, *qt, sum;
   printf("Enter any two numbers: ");
   scanf("%d %d",&fn,&sn); 
   pt = &fn;
   qt = &sn;
   sum = *pt + *qt;
   printf("Sum of the numbers: %d",sum);
   getch();
}
