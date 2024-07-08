//WAP to read a file and display its contents
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * fPtr;
    char ch;
    fPtr = fopen("data/file1.txt", "r");
    if(fPtr == NULL){
        printf("Unable to open file.\n");
        printf("Please check whether file exists.\n");
		exit(0);
    }
    printf("File opened successfully.\n");
    do{
        ch = fgetc(fPtr);
        putchar(ch);
    }while(ch != EOF);
    fclose(fPtr);
    return 0;
}
