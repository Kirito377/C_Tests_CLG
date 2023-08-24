#include <stdio.h>

int main()
{
    int a, sum, i = 1;
    printf("Enter the number 1: ");
    scanf("%d", &a);
    if (a <= 0){
        printf("0 and Negative numbers are not allowed");
    }else{
        sum = 1;
        do{
            sum *= i;
            i++;
        } while (i <= a);
        printf("%d", sum);
    }
    return 0;
}