//Write a program to print the size of all primitives data types (int, float, double, etc.) [hint: use sizeof( ) operator.]

#include<stdio.h>
#include<conio.h>

void main() 
{
    char ct;
    double dt;
	float ft;
	int it;
	long lt;
    short st;
	long double ldt;
	printf("Size of char: %ld byte\n", sizeof(ct));
	printf("Size of double: %ld bytes\n", sizeof(dt));
	printf("Size of float: %ld bytes\n", sizeof(ft));
    printf("Size of int: %ld bytes\n", sizeof(it));
    printf("Size of long: %ld bytes\n", sizeof(lt));
    printf("Size of short: %ld bytes\n", sizeof(st));
    printf("Size of long double: %ld bytes\n", sizeof(ldt));
    getch();
}
