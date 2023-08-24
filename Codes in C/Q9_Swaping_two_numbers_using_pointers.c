#include<stdio.h>
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a=*b;
    *b =temp;
}
int main(){
    int a,b;
    printf("Enter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);
    printf("Before Swap \n %d %d\n", a,b);
    swap(&a,&b);
    printf("After Swap \n %d %d",a,b);
    return 0;
}