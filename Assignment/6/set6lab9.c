//Write a program in C to find the largest element using Dynamic Memory Allocation.
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,n;
    float *ele;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    ele=(float*)calloc(n,sizeof(float));  // Memory is allocated for 'n' elements 
    if(ele==NULL){
        printf("No memory is allocated.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)  {
       printf("Number %d: ",i+1);
       scanf("%f",ele+i);
    }
    for(i=1;i<n;++i)  
       if(*ele<*(ele+i)) 
           *ele=*(ele+i);
    printf("Largest element: %.2f",*ele);
    return 0;
}
