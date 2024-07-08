// program to search an item in an array (using linear search)
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,key,a[100];
	printf("Enter size of an array: ");
    scanf("%d", &n);
    printf("Enter elements of the array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
	printf("Enter the element to be search: ");
	scanf("%d",&key);
	for(i=0;i<5;i++){
		if(key==a[i])
			break;
	}
	if(i<5)
		printf("Search successful\n%d is found...",key);
	else
		printf("Search unsuccessful...");
	getch();
}
