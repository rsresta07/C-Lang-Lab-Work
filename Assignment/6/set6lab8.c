/*Write a program in C to sort an array using Pointer.*/
#include<stdio.h>
#include<conio.h>
void Sort(int, int*);
void main(){
	int n,i, d[n];
	printf("Enter no of elements to store: ");
	scanf("%d",&n);
	printf("Enter %d no of elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&d[i]);
	Sort(n,d); 
	getch();
}
void Sort(int n, int* a){
	int i,j,tmp=0;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(*(a+i) > *(a+j)){
				tmp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = tmp;
			}
	printf("\nElements after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(a+i));
}
