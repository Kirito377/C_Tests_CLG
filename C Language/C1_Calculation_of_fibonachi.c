#include<stdio.h>

int main(){
    int x,y,z;
    int n;
    printf("Enter the number of term : ");
    scanf("%d", &n);
    x=0;
    y=1;
    for (int i=0;i<n;i++)
    {
        z=x+y;
        printf("%d ", x);
        x=y;
        y=z;        
    }
    
    return 0;
}