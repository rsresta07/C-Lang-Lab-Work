// program to search an item in an array (using binary search technique)
#include<stdio.h>
#include<conio.h>
void main(){			 
	int a[50], n, item, beg=0, mid, end, i;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    printf("Enter elements of the array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter ITEM to be searched: ");
    scanf("%d", &item);
    beg = 0;
    end = n-1;
    mid = (beg + end)/2;
    while ((beg<=end) && (a[mid]!=item)){
        if (item<a[mid])
            end = mid-1;
        else
            beg = mid+1;
        mid = (beg+end)/2;
    }
    if (a[mid]==item)
        printf("\nITEM found at location %d", mid+1);
    else
        printf("\nITEM doesn't exist");
    getch();
}
