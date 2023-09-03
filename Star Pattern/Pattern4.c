// Output

// 5 
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            printf("%d ",n-i);
        }
        printf("\n");
    }
    

    return 0;
}