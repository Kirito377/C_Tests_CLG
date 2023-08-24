#include<stdio.h>

int main(){
    int a,b;
    char ch;
    printf("in this formate \"1+1\"\n");
    printf("Enter Operation : ");
    scanf("%d", &a);
    scanf("%c", &ch);
    scanf("%d", &b);
    switch (ch)
    {
    case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d X %d = %d",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %.2f",a,b,(float) a/b);
        break;
    default:
        printf("Wrong Input");
        break;
    }
    return 0;
}