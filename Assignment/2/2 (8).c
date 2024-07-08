//To read and find whether it is letter, number or special character

#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    printf("Enter any character: "); //Input character from user
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    getch();
}
