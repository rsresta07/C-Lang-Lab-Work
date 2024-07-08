//C program to copy contents from one file to another
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *soufile;
    FILE *destfile;
    char soupath[100],destpath[100],ch;
    printf("Source file path: ");
    scanf("%s", soupath);
    printf("Destination file path: ");
    scanf("%s", destpath);
    soufile = fopen(soupath,"r");
    destfile = fopen(destpath,"w");
    if (soufile == NULL || destfile == NULL){
        printf("\nUnable to open file.\n");
        printf("Please check if file exists.");
        exit(0);
    }
    ch = fgetc(soufile);
    while (ch != EOF){
        fputc(ch, destfile);
        ch = fgetc(soufile);
    }
    printf("\nFiles copied successfully.\n");
    fclose(soufile);
    fclose(destfile);
    return 0;
}
