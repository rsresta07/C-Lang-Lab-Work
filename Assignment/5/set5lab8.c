#include<stdio.h>
#include<math.h>
int check(int);
int main(){
    int n1;
    printf("enter any number: ");
    scanf("%d", &n1);
    if(check(n1))
        printf("%d is Armstrong number.", n1);
    else
        printf("%d is not Armstrong number.", n1);
    return 0;
}
int check(int n1){
    int sum, num;
    sum = 0;
    num = n1;
    while(num!=0){  
        sum+=pow(num%10,3);
        num/=10;
    }
    return (n1 == sum);
}
