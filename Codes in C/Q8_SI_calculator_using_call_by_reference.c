#include<stdio.h>
void sicalculator(int p,float r,int t, float *si){
    *si=(p*r*t)/100;
}
int main(){
    int p,t;
    float r,si;

    printf("***** SI Calculator *****\n\n");
    
    printf("Enter Principle : ");
    scanf("%d", &p);

    printf("Enter Rate(per annum): ");
    scanf("%f", &r);    

    printf("Enter Time(in years) : ");
    scanf("%d", &t);        

    sicalculator(p,r,t,&si);
    
    printf("Simple Interest is %.2f", si);

    return 0;
}