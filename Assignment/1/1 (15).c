//Write a program to check whether entered number is odd or even using ternary operator. (? :)

#include<stdio.h>  
#include<conio.h>

void main()  
{  
    int n;  
    printf("Enter an integer number: ");  
    scanf("%d", &n);  
    (n % 2 == 0) ? (printf("\n%d is even number", n)) : (printf("\n%d is odd  number", n));  
    getch();  
}
