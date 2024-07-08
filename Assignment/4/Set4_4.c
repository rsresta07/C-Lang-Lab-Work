// program to read n numbers and sort them in ascending order (bubble sort)
#include <stdio.h>
#include<conio.h>
void main(){
	int a[100], n, c, d, swap;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter %d integers: ", n);
	for (c = 0; c < n; c++)
		scanf("%d", &a[c]);
	for (c=0;c<n-1;c++){
    	for (d=0;d<n-c-1;d++){
			if (a[d] > a[d+1]){
        		swap = a[d];
        		a[d] = a[d+1];
        		a[d+1] = swap;
			}
    	}
	}
	printf("\nSorted list in ascending order:\n");
	for (c = 0; c < n; c++)
		printf("%4d", a[c]);
	getch();
}
