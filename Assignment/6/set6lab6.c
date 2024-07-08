/*WAP to add numbers using call by reference and pointer.*/
#include <stdio.h>
long add(long *, long *);
int main(){
   long fno, sno, sum;
   printf("First number: ");
   scanf("%ld", &fno);
   printf("Second number: ");
   scanf("%ld", &sno);   
   sum = add(&fno, &sno);
   printf("Sum of %ld and %ld is %ld", fno, sno, sum);
   return 0;
}
long add(long *n1, long *n2) {
   return *n1 + *n2;
}
