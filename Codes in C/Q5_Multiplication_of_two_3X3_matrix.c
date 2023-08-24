#include<stdio.h>

int main(){
    int matrix1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int matrix2[3][3]={
        {3,2,1},
        {5,6,4},
        {8,7,9}
    };
    int answer[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            answer[i][j]=0;
            for(int k = 0; k < 3; k++){
                answer[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }    
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", answer[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}