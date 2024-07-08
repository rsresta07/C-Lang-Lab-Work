#include <stdio.h>
#include<conio.h>
int main() 
{
    int n, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    do{
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }while (n != 0);
    
    printf("Reversed number = %d", rev);
    getch();
}
