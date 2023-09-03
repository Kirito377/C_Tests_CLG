#include<stdio.h>

int main(){
    int n,sum,i=1;
    printf("Enter the number : ");
    scanf("%d", &n);
    sum = 1;
    do
    {
       sum *= i;
       i++;
    }while (i<=n);
    printf("Factor of %d is %d",n, sum);
    return 0;
}