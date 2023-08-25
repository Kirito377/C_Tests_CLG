#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewFile.txt", "w");
    fprintf(fptr,"Hello World!");
    return 0;
}