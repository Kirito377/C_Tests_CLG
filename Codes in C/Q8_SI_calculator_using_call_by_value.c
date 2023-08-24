#include<stdio.h>

int main(){
    int p,t;
    float r;
    printf("***** SI Calculator *****\n\n");
    printf("Enter Principle : ");
    scanf("%d", &p);
    printf("Enter Rate(per annum): ");
    scanf("%f", &r);    
    printf("Enter Time(in years) : ");
    scanf("%d", &t);        
    printf("Simple Interest is %.2f", (p*r*t)/100);
    return 0;
}