#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("q11_demo.txt","r");
    int word=0,line=0,space=0;
    char ch;
    while ((ch=getc(fptr)) != EOF)
    {
        if (ch == ' ' || ch =='\t')
        {
            space++;
        }else if (ch == '\n')
        {
            line++;
        }else{
            word++;
            while ((ch=getc(fptr)) !=' ' && ch != '\n' && ch !='\t' && ch != EOF){
            }
            ungetc(ch, fptr);
        }
    }
    fclose(fptr);
    printf("Total Line : %d\n", line);
    printf("Total space : %d\n", space);
    printf("Total Words : %d\n", word);
    return 0;
}
