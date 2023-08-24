#include<stdio.h>

int main(){
    int a,b,input;
    printf("Enter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Substraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        printf("%d X %d = %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d = %.2f",a,b,(float) a/b);
        break;
    default:
        printf("Wrong Input");
        break;
    }
    return 0;
}