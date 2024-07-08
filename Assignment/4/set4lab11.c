//12.Program to read n numbers and display only the prime numbers .
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,c,a[200],prime[20],t=0;
	printf("How many numbers? ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		c=0;
        for(j=2;j<a[i];j++)
            if(a[i]%j==0){
                c=1;
                break;
            }
        if(c==0){
        	prime[t]=a[i];
            t++;
        }
    }
    printf("\nPrime Numbers in Above Array:\n");
    for(i=0;i<t;i++)
        printf("%6d",prime[i]);
	getch();
}
