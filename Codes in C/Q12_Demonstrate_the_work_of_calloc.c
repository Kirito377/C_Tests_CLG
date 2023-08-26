#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter thr number: ");
    scanf("%d", &n);
    int* memory = (int *)calloc(n,sizeof(int));
    if (memory != NULL){
        printf("Memory allocated! \n");
        for (int i = 0; i < n; i++){
            // CALLOC allocates memory and initializes all bytes to zero.
            printf("Memory [%d] Value = %d\n", i,memory[i]);
        }
    }else{
        printf("Failed to locate memory");
    }
    return 0;
}