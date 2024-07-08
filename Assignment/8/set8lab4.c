//C program to compare two files
#include <stdio.h>
#include <stdlib.h>
int compare(FILE * fPtr1, FILE * fPtr2, int * line, int * col){
    char ch1, ch2;
    *line = 1;
    *col  = 0;
    do{
        ch1 = fgetc(fPtr1);
        ch2 = fgetc(fPtr2);
        if (ch1 == '\n'){
            *line += 1;
            *col = 0;
        }
        if (ch1 != ch2)
            return -1;
        *col  += 1;
    } while (ch1 != EOF && ch2 != EOF);
    if (ch1 == EOF && ch2 == EOF)
        return 0;
    return -1;
}
int main(){
    FILE * fPtr1; 
    FILE * fPtr2;
    char path1[100];
    char path2[100];
    int diff;
    int line, col;
    printf("Path of first file: ");
    scanf("%s", path1);
    printf("Path of second file: ");
    scanf("%s", path2);
    fPtr1 = fopen(path1, "r");
    fPtr2 = fopen(path2, "r");
    if (fPtr1 == NULL || fPtr2 == NULL){
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists.");
        exit(0);
    }
    diff = compare(fPtr1, fPtr2, &line, &col);
    if (diff == 0)
    
        printf("\nBoth files are equal.");
    else {
        printf("\nFiles are not equal.\n");
        printf("Line: %d, col: %d", line, col);
    }
    fclose(fPtr1);
    fclose(fPtr2);
    return 0;
}
