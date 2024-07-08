//WAP to create a file and write data into file.
#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 1000
int main(){
	char data[DATA_SIZE];
    FILE * fptr;
    fptr = fopen("data/file1.txt", "w");
    if(fptr == NULL){
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, fptr);
    fclose(fptr);
    printf("File created and saved successfully.");
    return 0;
}
