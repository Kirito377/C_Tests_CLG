#include<stdio.h>

int main(){
    int a,b,sum;
    printf("Enter the number 1: ");
    scanf("%d", &a);
    printf("Enter the number 2: ");
    scanf("%d", &b);
    if (a>b)
    {
        printf("%d is greater than %d",a,b);
    }else {
        printf("%d is greater than %d",b,a);
    }
    return 0;
}