//WAP to append data into a file
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
void read(FILE * fptr);
int main(){
    FILE *fptr;
    char path[100];
    char append[SIZE];
    printf("Enter file path: ");
    scanf("%s", path);
    fptr = fopen(path, "a");
    if (fptr == NULL){
        printf("\nUnable to open file.");
        printf("Please check whether file exists.");
        exit(0);
    }
    printf("\nEnter data to append: ");
    fflush(stdin);          // To clear extra white space characters in stdin
    fgets(append, SIZE, stdin);
    fputs(append, fptr);
    fptr = freopen(path, "r", fptr);
    printf("Changed file contents.\n\n");
    read(fptr);
    fclose(fptr);
    return 0;
}
void read(FILE * fptr){
    char ch;
    do {
        ch = fgetc(fptr);
        putchar(ch);
    }while (ch != EOF);
}
